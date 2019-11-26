#include <iostream>
#include <memory>
#include "src/user_interface.h"

int main()
{
    std::shared_ptr<user_interface> ui = std::make_shared<user_interface>();
    ui->hello();
    return 0;
}