#include "src/user_interface.h"

int main()
{
    auto uio_ptr = user_interface::create(0);
    uio_ptr->hello();
    return 0;
}
