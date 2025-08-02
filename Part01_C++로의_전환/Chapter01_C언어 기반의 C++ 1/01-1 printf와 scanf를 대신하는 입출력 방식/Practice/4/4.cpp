#include <iostream>

int main()
{
    int val;

	while (true)
	{
        std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin >> val;

        if (val == -1)
        {
            std::cout << "프로그램을 종료합니다.";
            return 0;
        }

        std::cout << "이번 달 급여: " << 50 + val * 0.12 << "만원" << std::endl;
	}

    return 0;
}