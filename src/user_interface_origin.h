#ifndef HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_ORIGIN_H
#define HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_ORIGIN_H

#include <memory>

class user_interface_origin
{
    user_interface_origin() : m_state{-1}{};

    bool initialize(int state);

    int m_state;
    static int m_auth;

    void printState();


public:
    static std::unique_ptr<user_interface_origin> create(int state);

    virtual void hello();

    static int getMAuth();
    static void setMAuth(int mAuth);

    friend class user_interface;
};


#endif //HOW_TO_EXTEND_SDK_CLASSES_USER_INTERFACE_ORIGIN_H
