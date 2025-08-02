#include <iostream>

int main()
{
    int result = 0;

	for (int i = 0; i < 5; i++)
	{
		int val;

	    std::cout << i + 1 << "번째 정수 입력: ";
		std::cin >> val;

		result += val;
	}
	
	std::cout << "합계: " << result;
	return 0;
}