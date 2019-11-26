#ifndef HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_H
#define HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_H

#include "user_interface_origin.h"

class user_interface
        : public user_interface_origin
{
    int m_state;
    void printState();

public:
    user_interface() : m_state{0} {};
    void hello();
};


#endif //HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_H
