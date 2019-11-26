#include <cassert>
#include "src/user_interface.h"

int main()
{
    user_interface::setMAuth(3);

    auto ui_ptr = user_interface::create(0);
    ui_ptr->hello();
    ui_ptr->printStateProxy();

    assert(ui_ptr->getMAuth()==3);
    return 0;
}
