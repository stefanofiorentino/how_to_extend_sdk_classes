#ifndef HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_ORIGIN_H
#define HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_ORIGIN_H


class user_interface_origin
{
    size_t m_state;
    void printState();

public:
    user_interface_origin() : m_state{0} {};
    void hello();
};


#endif //HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_ORIGIN_H
