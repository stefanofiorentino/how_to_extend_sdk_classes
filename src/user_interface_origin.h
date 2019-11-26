#ifndef HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_ORIGIN_H
#define HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_ORIGIN_H


class user_interface_origin
{
    int m_state;
    void printState();

public:
    user_interface_origin() : m_state{0} {};
    void hello();

    friend class user_interface;
};


#endif //HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_ORIGIN_H
