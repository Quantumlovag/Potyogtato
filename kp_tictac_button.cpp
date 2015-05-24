#include "kp_tictac_button.hpp"

TicTac_Button::TicTac_Button(float p_x, float p_y, float s_x, float s_y)
    :Button(p_x, p_y, s_x, s_y)
{
    status=0;
    turn=0;
    available=false;
}

void TicTac_Button::set_available()
{
    if(available) available=false;
    else available=true;
}

void TicTac_Button::handle(event ev)
{
    if(!status && available)
    {
        if(turn) status=2;
        else status=1;
        set_available();
    }
}

void TicTac_Button::set_turn()
{
    if(turn) turn=0;
    else turn=1;
}

void TicTac_Button::print() const
{
    canvas tt_btn;
    tt_btn.open(size_x, size_y);
    if(available)
    {
        gout << move_to(0, 0) << color(0, 0, 255) << box(size_x, size_y)
             << move_to(20, 20) << color(255, 255, 255) << box(size_x-40, size_y-40);
    }
    else
    {
        gout << move_to(0, 0) << color(155, 155, 155) << box(size_x, size_y);
        if(status==0) gout << move_to(20, 20) << color(255, 255, 255) << box(size_x-40, size_y-40);
        if(status==1) gout << move_to(20, 20) << color(255, 255, 0) << box(size_x-40, size_y-40);
        if(status==2) gout << move_to(20, 20) << color(255, 0, 0) << box(size_x-40, size_y-40);
    }
}
