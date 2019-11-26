#include <iostream>
#include "user_interface.h"
#include "../defines.h"

void user_interface::hello()
{
    DEBUG_PRETTY_FUNCTION;
    return this->printState();
}

void user_interface::printState()
{
    DEBUG_PRETTY_FUNCTION;
    std::puts(std::to_string(m_state).c_str());
}

bool user_interface::initialize(int state)
{
    m_state = state;
    return true;
}

std::unique_ptr<user_interface> user_interface::create(int state)
{
    auto user_interface_origin_ptr = std::unique_ptr<user_interface>(new user_interface);
    if (!user_interface_origin_ptr->initialize(0))
    {
        return nullptr;
    }
    return user_interface_origin_ptr;
}
