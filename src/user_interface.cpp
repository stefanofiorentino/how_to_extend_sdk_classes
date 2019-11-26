#include <iostream>
#include "user_interface.h"

void user_interface::hello()
{
    return this->printState();
}

void user_interface::printState()
{
    std::puts(std::to_string(m_state).c_str());
}
