#include "Set.h"
#include "Line.h"
#include "Circle.h"

Set::Set(){

}

void Set::getPrimitives(bool fromFile) {
	ifstream infile;
	int numPrimitives;
	infile.open("test.dat");
	if (fromFile) {
		infile >> numPrimitives;
		for (int i = 0; i < numPrimitives; i++) {
			char pType;
			infile >> pType;
			if (pType == 'L') {
				Line l;
				infile >> l.x0;
				infile >> l.y0;
				infile >> l.x1;
				infile >> l.y1;
				primitives.push_back(l);
			}
			else if (pType == 'C') {
				Circle c;
				infile >> c.x;
				infile >> c.y;
				infile >> c.r;
				primitives.push_back(c);
			}
		}
		infile.close();
	}
	else {
		cin >> numPrimitives;
		for (int i = 0; i < numPrimitives; i++) {
			char pType;
			cin >> pType;
			if (pType == 'L') {
				Line l;
				infile >> l.x0;
				infile >> l.y0;
				infile >> l.x1;
				infile >> l.y1;
				primitives.push_back(l);
			}
			else if (pType == 'C') {
				Circle c;
				infile >> c.x;
				infile >> c.y;
				infile >> c.r;
				primitives.push_back(c);
			}
		}
	}
}