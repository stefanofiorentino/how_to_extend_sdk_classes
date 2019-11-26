#include <iostream>
#include "user_interface_origin.h"
#include "../defines.h"

void user_interface_origin::hello()
{
    DEBUG_PRETTY_FUNCTION;
    return this->printState();
}

void user_interface_origin::printState()
{
    DEBUG_PRETTY_FUNCTION;
    std::puts(std::to_string(m_state).c_str());
}
