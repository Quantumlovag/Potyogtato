#ifndef KP_STANDARD_BUTTON_HPP_INCLUDED
#define KP_STANDARD_BUTTON_HPP_INCLUDED
#include "kp_button.hpp"
#include <functional>

class Standard_Button : public Button
{
protected:
    std::function<void()> fv;
public:
    Standard_Button(float p_x, float p_y, float s_x, float s_y, std::string txt, std::function<void()> f);
    void handle(event ev);
};



#endif // KP_STANDARD_BUTTON_HPP_INCLUDED
