#ifndef __CIRCLE_H_
#define __CIRCLE_H_

#include "Point.h"

class Circle
{
private:
	Point circlePoint;
	int circleRadius;

public:
	void Init(int x, int y, int radius);
	void ShowRingInfo() const;
};

#endif