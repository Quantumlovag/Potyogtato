#include "graphics.hpp"
#include "kp_application.hpp"
#include "kp_window.hpp"
#include "kp_widgets.hpp"
#include "kp_standard_button.hpp"
#include <iostream>

using namespace std;
using namespace genv;

const int W=700;
const int H=600;

class Menu_Window : public Window
{
public:
    Menu_Window(int inX, int inY);
};

class My_Application : public Application
{
public:
    My_Application();
    void run();
};



void My_Application::run()
{
    v_windows[actual]->examine();
    v_windows[actual]->events();
    if(v_windows[actual]->get_ready())
    {
        if(actual==0) actual=1;
        else
        {
            if(actual==1) actual=2;
            else actual=0;
        }
    }
}

My_Application::My_Application()
{
    actual=0;
    Menu_Window *mw1=new Menu_Window(W, H);
    v_windows.push_back(mw1);
}

Menu_Window::Menu_Window(int inX, int inY)
    :Window(inX, inY)
{
//    Standard_Button *sb1=new Standard_Button(250, 100, 200, 30, "Single Player", [&](){sb1->set_label("Nope");});
//    v_widgets.push_back(sb1);
    Standard_Button *sb2=new Standard_Button(250, 300, 200, 30, "Multiplayer", [&](){this->step();});
    v_widgets.push_back(sb2);
    Standard_Button *sb3=new Standard_Button(250, 500, 200, 30, "Exit", [&](){this->close();});
    v_widgets.push_back(sb3);
}

int main()
{
    My_Application *ma=new My_Application();
    ma->run();
    return 0;
}
