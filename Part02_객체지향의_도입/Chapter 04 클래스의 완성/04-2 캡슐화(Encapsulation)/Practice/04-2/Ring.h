#ifndef __RING_H_
#define __RING_H_

#include "Circle.h"

class Ring
{
private:
	Circle inner;
	Circle outter;

public:
	void Init(int innerX, int innerY, int innerRadius, int outterX, int outterY, int outterRadius);
	void ShowRingInfo() const;
};

#endif