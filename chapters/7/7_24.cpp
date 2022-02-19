#ifndef CPPLV1_SCREEN_H
#define CPPLV1_SCREEN_H
#include <iostream>
#include <string>

class Screen{
public:
    using pos = std::string::size_type;
    Screen() = default;
    Screen(pos ht, pos wd):height(ht), width(wd),
            contents(ht * wd, ' '){}
    Screen(pos ht, pos wd, char c):height(ht), width(wd),
            contents(ht * wd, c){}
    char get() const { return contents[cursor];}
    char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

inline
Screen &Screen::move(Screen::pos r, Screen::pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}
inline
char Screen::get(Screen::pos r, Screen::pos c) const {
    pos row = r * width;
    return contents[row + c];
}
#endif //CPPLV1_SCREEN_H
