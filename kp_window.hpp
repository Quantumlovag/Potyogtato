#ifndef KP_WINDOW_HPP_INCLUDED
#define KP_WINDOW_HPP_INCLUDED
#include "kp_widgets.hpp"
#include <vector>

class Window
{
protected:
    int X, Y;
    bool exit;
    bool ready;
    std::vector<Widgets *> v_widgets;
public:
    Window(int inX, int inY);
    void events();
    void close();
    void step();
    void examine();
    bool get_ready() {return ready;}
};

#endif // KP_WINDOW_HPP_INCLUDED
