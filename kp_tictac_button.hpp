#ifndef KP_TICTAC_BUTTON_HPP_INCLUDED
#define KP_TICTAC_BUTTON_HPP_INCLUDED
#include "kp_button.hpp"

class TicTac_Button : public Button
{
protected:
    int status;
    int turn;
    bool available;
public:
    TicTac_Button(float p_x, float p_y, float s_x, float s_y);
    virtual void print() const;
    virtual void handle(event ev);
    bool focusable() {return false;}
    void set_turn();
    void set_available();
};


#endif // KP_TICTAC_BUTTON_HPP_INCLUDED
