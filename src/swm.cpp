#include "swm.hpp"
#include <cstdlib>

void SWM::init() {
    display = XOpenDisplay(nullptr);
    root = DefaultRootWindow(display);
}

void SWM::run() {
    XEvent ev;
    while (true) {
        XNextEvent(display, &ev);
    }
}

void SWM::cleanup() {
    XCloseDisplay(display);
}

int main() {
    SWM swm;
    swm.init();
    swm.run();
    swm.cleanup();
}

