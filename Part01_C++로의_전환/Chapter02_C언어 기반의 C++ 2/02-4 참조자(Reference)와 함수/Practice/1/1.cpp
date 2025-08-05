#include <iostream>

using namespace std;

void Add(int &ref);

void Change(int& ref);

int main()
{
    int num = 10;
    std::cout << num << endl;

    Add(num);
    std::cout << num << endl;

    Change(num);
    std::cout << num << endl;

    return 0;
}

void Add(int& ref)
{
    ref++;
}

void Change(int& ref)
{
    ref = -ref;
}
