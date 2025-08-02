#include <iostream>

namespace BestComTmp1
{
    void SimpleFunc(void)
    {
        std::cout << "BestCom이 정의한 함수" << std::endl;
    }
}

namespace ProgComTmp1
{
    void SimpleFunc(void)
    {
        std::cout << "ProgComTmp1이 정의한 함수" << std::endl;
    }
}

int main()
{
    BestComTmp1::SimpleFunc();
    ProgComTmp1::SimpleFunc();

    return 0;
}