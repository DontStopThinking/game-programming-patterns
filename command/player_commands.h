#pragma once

#include "command.h"
#include "player_actions.h"

class DoNothingCommand : public Command
{
public:
    virtual void execute() { /* do nothing */ }
};

class JumpCommand : public Command
{
public:
    virtual void execute() { jump(); }
};

class FireGunCommand : public Command
{
public:
    virtual void execute() { fireGun(); }
};

class MoveLeftCommand : public Command
{
public:
    virtual void execute() { moveLeft(); }
};

class MoveRightCommand : public Command
{
public:
    virtual void execute() { moveRight(); }
};

class MoveUpCommand : public Command
{
public:
    virtual void execute() { moveUp(); }
};

class MoveDownCommand : public Command
{
public:
    virtual void execute() { moveDown(); }
};
