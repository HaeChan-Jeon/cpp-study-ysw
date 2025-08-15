#include <iostream>

using namespace std;

class Rectangle
{
private:
	int a;
	int b;
public:
	Rectangle(int num)
		: a(num), b(num)
	{ }
	Rectangle(int num1, int num2)
		: a(num1), b(num2)
	{ }
	void ShowAreaInfo() const
	{
		cout << "면적: " << a * b << endl;
	}
};

class Square : public Rectangle
{
public:
	Square(int num) : Rectangle(num)
	{ }
};

int main()
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
	return 0;
}