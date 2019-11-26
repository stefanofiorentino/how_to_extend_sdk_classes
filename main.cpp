#include "src/user_interface.h"

int main()
{
    auto ui_ptr = user_interface::create(0);
    ui_ptr->hello();
    ui_ptr->printStateProxy();
    return 0;
}
