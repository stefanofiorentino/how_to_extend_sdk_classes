#include <iostream>
#include "user_interface_origin.h"

void user_interface_origin::hello()
{
    return this->printState();
}

void user_interface_origin::printState()
{
    std::puts(std::to_string(m_state).c_str());
}
