#pragma once
#include "Primitive.h"
class Line: public Primitive
{
public:
	int x0, y0, x1, y1;
	Line() {
		t = 'L';
	}
};

