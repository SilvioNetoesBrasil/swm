#pragma once
#include <X11/Xlib.h>

class SWM {
public:
    Display* display;
    Window root;

    void init();
    void run();
    void cleanup();
};

