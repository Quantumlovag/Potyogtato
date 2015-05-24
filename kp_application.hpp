#ifndef KP_APPLICATION_HPP_INCLUDED
#define KP_APPLICATION_HPP_INCLUDED
#include "kp_window.hpp"
#include <vector>

class Application
{
protected:
    std::vector<Window *> v_windows;
    int actual;
};

#endif // KP_APPLICATION_HPP_INCLUDED
