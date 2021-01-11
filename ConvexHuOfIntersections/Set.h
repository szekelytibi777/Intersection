#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include "Primitive.h"
#include "Point.h"
using namespace std;
	
class Set
{
public:
	Set();
	vector<Primitive> primitives;
	vector<Point> points;
	void getPrimitives(bool fromFile = false);
	void calcIntersections();
	vector<Point> intersect(const Primitive &p1, const Primitive &p2);
	static constexpr short perm(const char t1, const char t2) 
	{
		return (t1 << 8) | t2;
	}

};

