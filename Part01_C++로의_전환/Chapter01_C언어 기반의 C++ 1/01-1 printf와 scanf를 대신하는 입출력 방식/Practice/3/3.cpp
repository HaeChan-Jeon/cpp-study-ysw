#include <iostream>

int main()
{
    int val;

    std::cin >> val;

    for (int i = 0; i < 9; i++)
    {
        std::cout << val * (i + 1) << std::endl;
    }

    return 0;
}