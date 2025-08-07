#include <iostream>

using namespace std;

namespace PRT_CONST
{
    string emptyStr = "";
}

class Printer
{
private:
    string setStr = PRT_CONST::emptyStr;

public:
    void SetString(string str);
    void ShowString();
};

void Printer::SetString(string str)
{
    setStr = str;
}

void Printer::ShowString()
{
    cout << setStr << endl;
}

int main()
{
    Printer pnt;
    pnt.SetString("Hello world!");
    pnt.ShowString();

    pnt.SetString("I Love C++");
    pnt.ShowString();

    return 0;
}