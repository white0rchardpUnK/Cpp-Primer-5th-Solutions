#ifndef CPPLV1_WINDOW_MGR_H
#define CPPLV1_WINDOW_MGR_H
#include <iostream>
#include <vector>
#include <string>

class Window_mgr{
public:
    using ScreenIndex = std::vector<Screen>::size_type ;
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens = {Screen(24, 80, ' ')};
};

void Window_mgr::clear(Window_mgr::ScreenIndex i) {
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}
#endif //CPPLV1_WINDOW_MGR_H
