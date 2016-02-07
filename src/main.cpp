#include <iostream>
#include <string>
#include "book.h"


auto main() -> int
{
    Book book(std::string("Configure"), 1500);
    std::cout << book.describe() << std::endl;

    return 0;
}

