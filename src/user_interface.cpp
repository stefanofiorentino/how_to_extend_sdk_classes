#include <iostream>
#include "user_interface.h"
#include "user_interface_origin.h"
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
