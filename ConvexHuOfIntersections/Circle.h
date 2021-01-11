#pragma once
#include "Primitive.h"
class Circle: public Primitive
{
public:
	int x, y, r;
	Circle() {
		t = 'C';
	}
};

