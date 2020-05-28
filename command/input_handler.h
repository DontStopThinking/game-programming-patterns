#pragma once

#include <memory>
#include "command.h"

class InputHandler
{
private:
    int key = 0;
    std::unique_ptr<Command> buttonZ;
    std::unique_ptr<Command> buttonX;
    std::unique_ptr<Command> buttonSpace;
    std::unique_ptr<Command> buttonLeftArrow;
    std::unique_ptr<Command> buttonRightArrow;
    std::unique_ptr<Command> buttonUpArrow;
    std::unique_ptr<Command> buttonDownArrow;

public:
    InputHandler();
    void handleInput();
};