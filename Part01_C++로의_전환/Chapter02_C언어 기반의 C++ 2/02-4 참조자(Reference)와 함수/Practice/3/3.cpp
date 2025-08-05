#include <iostream>

using namespace std;

void SwapPointer(int* ptr1, int* ptr2);

int main()
{
    int num1 = 5;
    int* ptr1 = &num1;
    int num2 = 10;
    int* ptr2 = &num2;

    std::cout << "ptr1: " << *ptr1 << endl;
    std::cout << "ptr2: " << *ptr2 << endl;

    SwapPointer(ptr1, ptr2);

    std::cout << "ptr1: " << *ptr1 << endl;
    std::cout << "ptr2: " << *ptr2 << endl;

    return 0;
}

void SwapPointer(int* ptr1, int* ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
