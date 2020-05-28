#pragma once

#include "command.h"
#include "player_actions.h"

class DoNothingCommand : public Command
{
public:
    virtual void execute() override { /* do nothing */ }
};

class JumpCommand : public Command
{
public:
    virtual void execute() override { jump(); }
};

class FireGunCommand : public Command
{
public:
    virtual void execute() override { fireGun(); }
};

class MoveLeftCommand : public Command
{
public:
    virtual void execute() override { moveLeft(); }
};

class MoveRightCommand : public Command
{
public:
    virtual void execute() override { moveRight(); }
};

class MoveUpCommand : public Command
{
public:
    virtual void execute() override { moveUp(); }
};

class MoveDownCommand : public Command
{
public:
    virtual void execute() override { moveDown(); }
};
