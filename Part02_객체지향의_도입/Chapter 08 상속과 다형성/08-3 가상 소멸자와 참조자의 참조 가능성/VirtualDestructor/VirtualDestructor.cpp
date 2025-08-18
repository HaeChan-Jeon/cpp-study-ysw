#include <iostream>

using namespace std;

class First
{
private:
    string strOne;
public:
    First(string str) : strOne(str)
    { }
    ~First()
    {
        cout << "~First()" << endl;
    }
};

class Second : public First
{
private:
    string strTwo;
public:
    Second(string str1, string str2)
        : First(str1), strTwo(str2)
    { }
    ~Second()
    {
        cout << "~Second()" << endl;
    }
};

int main(void)
{
    First* ptr = new Second("Simple", "Complex");
    delete ptr;
    return 0;
}