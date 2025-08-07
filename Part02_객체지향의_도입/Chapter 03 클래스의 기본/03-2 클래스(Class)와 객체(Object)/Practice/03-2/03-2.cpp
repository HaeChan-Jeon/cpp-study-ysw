#include <iostream>

using namespace std;

namespace CAL_CONST
{
    enum
    {
        addNum = 0,
        minNum = 0,
        mulNum = 0,
        divNum = 0
    };
}

class Calculator
{
private:
    int addCout;
    int minCout;
    int divCout;
    int mulCout;

public:

    void Init();

    double Add(double a, double b);
    double Min(double a, double b);
    double Div(double a, double b);
    double Mul(double a, double b);

    void ShowOpCount();
};

void Calculator::Init()
{
    addCout = CAL_CONST::addNum;
    minCout = CAL_CONST::minNum;
    divCout = CAL_CONST::divNum;
    mulCout = CAL_CONST::mulNum;
}

double Calculator::Add(double a, double b)
{
    addCout++;

    return a + b;
}

double Calculator::Min(double a, double b)
{
    minCout++;

    return a - b;
}

double Calculator::Div(double a, double b)
{
    divCout++;

    return a / b;
}

double Calculator::Mul(double a, double b)
{
    mulCout++;

    return a * b;
}

void Calculator::ShowOpCount()
{
    cout << "덧셈: " << addCout << " 뺄셈: " << minCout << " 곱셈: " << mulCout << " 나눗셈: " << divCout << endl;
}


int main()
{
    Calculator cal;
    cal.Init();
    cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
    cout << "3.5 + 1.7 = " << cal.Div(3.5, 1.7) << endl;
    cout << "2.2 + 1.5 = " << cal.Min(2.2, 1.5) << endl;
    cout << "4.9 + 1.2 = " << cal.Div(4.9, 1.2) << endl;
    cal.ShowOpCount();

    return 0;
}