#include <iostream>
#include "user_interface.h"
#include "../defines.h"

void user_interface::hello()
{
    DEBUG_PRETTY_FUNCTION;
    return user_interface_origin::hello();
}

void user_interface::printState()
{
    DEBUG_PRETTY_FUNCTION;
    return user_interface_origin::printState();
}

bool user_interface::initialize(int state)
{
    DEBUG_PRETTY_FUNCTION;
    return user_interface_origin::initialize(state);
}

std::unique_ptr<user_interface> user_interface::create(int state)
{
    DEBUG_PRETTY_FUNCTION;
    auto user_interface_origin_ptr = std::unique_ptr<user_interface>(new user_interface);
    if (!user_interface_origin_ptr->initialize(state))
    {
        return nullptr;
    }
    return user_interface_origin_ptr;
}

void user_interface::printStateProxy()
{
    DEBUG_PRETTY_FUNCTION;
    return this->printState();
}
