#include <iostream>

#include "input_handler.h"

int main()
{
    std::cout << "<ESC to exit>\n";

    bool running = true;
    int key = 0;

    InputHandler inputHandler;

    while (running)
    {
        try
        {
            inputHandler.handleInput();
        }
        catch (std::exception& e)
        {
            running = false;
        }
    }

    return 0;
}