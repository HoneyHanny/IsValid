#include <iostream>
#include <string>

#include "solution.h"

int main(int argc, char *argv[])
{
    Solution solution;

    for (int i = 1; i < argc; i++)
        std::cout << (solution.IsValid(argv[i]) ? "true" : "false") << std::endl;

    return 0;
}