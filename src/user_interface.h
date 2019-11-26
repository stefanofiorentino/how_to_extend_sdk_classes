#ifndef HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_H
#define HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_H


class user_interface
{
    size_t m_state;
    void printState();

public:
    user_interface() : m_state{0} {};
    void hello();
};


#endif //HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_H
