#ifndef HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_ORIGIN_H
#define HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_ORIGIN_H

#include <memory>

class user_interface_origin
{
    user_interface_origin() = default;

    bool initialize(int state);

    int m_state;
    void printState();


public:
    static std::unique_ptr<user_interface_origin> create(int state);

    void hello();

    friend class user_interface;
};


#endif //HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_ORIGIN_H
