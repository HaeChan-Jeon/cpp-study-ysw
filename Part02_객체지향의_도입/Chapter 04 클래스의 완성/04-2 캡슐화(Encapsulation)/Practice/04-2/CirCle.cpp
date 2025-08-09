#include <iostream>
#include "Circle.h"

using namespace std;

void Circle::Init(int x, int y, int radius)
{
	circleRadius = radius;
	circlePoint.Init(x, y);
}

void Circle::ShowRingInfo() const
{
	cout << "radius: " << circleRadius << endl;
	circlePoint.ShowPointInfo();
}