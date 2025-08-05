#include <iostream>

using namespace std;

int RefRetFuncOne(int& ref)
{
    ref++;
    return ref;
}

int main()
{
    int num1 = 1;
    int num2 = RefRetFuncOne(num1);

    num1++;
    num2+=100;

    std::cout << "num1: " << num1 << endl;
    std::cout << "num2: " << num2 << endl;

    return 0;
}