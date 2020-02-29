#include <iostream>

#include "absl/strings/str_format.h"

int main(int /* argc */, char ** /* argc */)
{
    std::cout << absl::StrFormat("Hello, %s!", "world") << std::endl;

    return 0;
}
