#ifndef HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_H
#define HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_H

#include <memory>

class user_interface
{
    user_interface() = default;

    bool initialize(int state);

    int m_state;
    void printState();


public:
    static std::unique_ptr<user_interface> create(int state);

    void hello();
};


#endif //HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_H
