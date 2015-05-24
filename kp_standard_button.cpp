#include "kp_standard_button.hpp"
#include <functional>

Standard_Button::Standard_Button(float p_x, float p_y, float s_x, float s_y, std::string txt, std::function<void()> f)
    :Button(p_x, p_y, s_x, s_y, txt)
{
    fv=f;
}

void Standard_Button::handle(event ev)
{
    if(focused && ev.keycode==key_enter)
    {
        fv();
    }
    if(contains(ev) && ev.button==btn_left)
    {
        fv();
    }
}
