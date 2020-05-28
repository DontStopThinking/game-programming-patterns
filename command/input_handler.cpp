#include <iostream>
#include <conio.h>

#include "input_handler.h"
#include "player_commands.h"

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_SPACE 32
#define KEY_X 120
#define KEY_Z 122

InputHandler::InputHandler()
{
    buttonSpace.reset(new JumpCommand());
    buttonX.reset(new FireGunCommand());
    buttonZ.reset(new DoNothingCommand());
    buttonLeftArrow.reset(new MoveLeftCommand());
    buttonRightArrow.reset(new MoveRightCommand());
    buttonUpArrow.reset(new MoveUpCommand());
    buttonDownArrow.reset(new MoveDownCommand());
}

void InputHandler::handleInput()
{
    key = getch();
    if (key == 27)  // escape key
    {
        std::cout << "thanks for playing!\n";
        throw std::exception();
    }
    else if (key == KEY_SPACE) // space key
    {
        buttonSpace->execute();
    }
    else if (key == KEY_X)  // x key
    {
        buttonX->execute();
    }
    else if (key == KEY_Z)  // z key
    {
        buttonZ->execute();
    }
    else if (key == 0 || key == 224)     // arrow keys
    {
        key = getch();
        if (key == KEY_LEFT)    // left arrow
        {
            buttonLeftArrow->execute();
        }
        else if (key == KEY_RIGHT)   // right arrow
        {
            buttonRightArrow->execute();
        }
        else if (key == KEY_UP)  // up arrow
        {
            buttonUpArrow->execute();
        }
        else if (key == KEY_DOWN)    // down arrow
        {
            buttonDownArrow->execute();
        }
    }
}