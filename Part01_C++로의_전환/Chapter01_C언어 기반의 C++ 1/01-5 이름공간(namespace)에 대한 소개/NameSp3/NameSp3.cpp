#include <iostream>

namespace BestComTmp1
{
    void SimpleFunc(void);
}

namespace BestComTmp1
{
    void PrettyFunc(void);
}

namespace ProgComTmp1
{
    void SimpleFunc(void);
}

int main()
{
    BestComTmp1::SimpleFunc();

    return 0;
}

void BestComTmp1::SimpleFunc(void)
{
    std::cout << "BestCom이 정의한 함수" << std::endl;
    PrettyFunc();
    ProgComTmp1::SimpleFunc();
}

void BestComTmp1::PrettyFunc(void)
{
    std::cout << "So Pretty!!" << std::endl;
}

void ProgComTmp1::SimpleFunc(void)
{
    std::cout << "ProgComTmp1이 정의한 함수" << std::endl;
}