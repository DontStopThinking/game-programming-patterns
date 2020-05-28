#include <iostream>

#include "input_handler.h"

int main()
{
    std::cout << "<esc: exit\n"
              << "arrow keys: move\n"
              << "space: jump\n"
              << "x: fire weapon>\n";

    bool running = true;

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