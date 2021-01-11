#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include "Primitive.h"
using namespace std;
	
class Set
{
public:
	Set();
	vector<Primitive> primitives;
	void getPrimitives(bool fromFile = false);
};

