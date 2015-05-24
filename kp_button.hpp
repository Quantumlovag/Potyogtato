#ifndef KP_BUTTON_HPP_INCLUDED
#define KP_BUTTON_HPP_INCLUDED
#include "kp_widgets.hpp"
#include <string>

class Button : public Widgets
{
protected:
    std::string label;
public:
    Button(float p_x, float p_y, float s_x, float s_y, std::string txt);
    void print() const;
    virtual void handle(event ev) =0;
    bool focusable() {return true;}
};


#endif // KP_BUTTON_HPP_INCLUDED
