#include <iostream>
#include "user_interface_origin.h"
#include "../defines.h"

void user_interface_origin::hello()
{
    DEBUG_PRETTY_FUNCTION;
}

void user_interface_origin::printState()
{
    DEBUG_PRETTY_FUNCTION;
    std::puts(std::to_string(m_state).c_str());
}

bool user_interface_origin::initialize(int state)
{
    m_state = state;
    return true;
}

std::unique_ptr<user_interface_origin> user_interface_origin::create(int state)
{
    auto user_interface_origin_origin_ptr = std::unique_ptr<user_interface_origin>(new user_interface_origin);
    if (!user_interface_origin_origin_ptr->initialize(0))
    {
        return nullptr;
    }
    return user_interface_origin_origin_ptr;
}
