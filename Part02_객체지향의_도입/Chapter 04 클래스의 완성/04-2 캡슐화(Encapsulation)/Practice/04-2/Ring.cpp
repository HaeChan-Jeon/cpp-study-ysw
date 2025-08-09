#include <iostream>
#include "Ring.h"

using namespace std;

void Ring::Init(int innerX, int innerY, int innerRadius, int outterX, int outterY, int outterRadius)
{
	inner.Init(innerX, innerY, innerRadius);
	outter.Init(outterX, outterY, outterRadius);
}

void Ring::ShowRingInfo() const
{
	cout << "Inner Circle Info..." << endl;
	inner.ShowRingInfo();
	cout << "Outter Circle Info..." << endl;
	outter.ShowRingInfo();
}