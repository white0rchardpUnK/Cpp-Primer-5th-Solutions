#include <iostream>
#include <vector>
#include <string>

class Screen;
class Window_mgr{
public:
    using ScreenIndex = std::vector<Screen>::size_type ;
    void clear(ScreenIndex);
    Window_mgr();
private:
    std::vector<Screen> screens;
};

class Screen{
    friend void Window_mgr::clear(ScreenIndex);
public:
    using pos = std::string::size_type;
    Screen() = default;
    Screen(pos ht, pos wd):height(ht), width(wd),
                           contents(ht * wd, ' '){};
    Screen(pos ht, pos wd, char c):height(ht), width(wd),
                                   contents(ht * wd, c){};
    char get() const { return contents[cursor];};
    char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
    Screen &set(char);
    Screen &set(pos, pos, char);
    Screen &display(std::ostream &os){
        do_display(os);
        return *this;
    }
    const Screen &display(std::ostream &os) const {
        do_display(os);
        return *this;
    }
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    void do_display(std::ostream &os) const {os << contents;}
};

Window_mgr::Window_mgr() {Screen(24, 80, ' ');}

void Window_mgr::clear(Window_mgr::ScreenIndex i) {
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

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
inline
Screen &Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}
inline
Screen &Screen::set(Screen::pos r, Screen::pos col, char ch) {
    contents[r * width + col] = ch;
    return *this;
}

int main(){}
