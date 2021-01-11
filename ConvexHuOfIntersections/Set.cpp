#include "Set.h"
#include "Line.h"
#include "Circle.h"
#include "Point.h"

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
	points.reserve(numPrimitives * 2); // my guess
}

void Set::calcIntersections() {
	for (int i = 0; i < primitives.size(); i++) {
		for (int j = 0; j < primitives.size(); j++) {
			if (i != j) {
				Primitive p1 = primitives[i];
				Primitive p2 = primitives[j];
				vector<Point> is = intersect(p1, p2);
				points.insert(points.end(), is.begin(), is.end());	
			}
		}
	}
}

vector<Point> Set::intersect(const Primitive &p1, const Primitive &p2) {
	vector<Point> pv;
	short p = perm(p1.t, p2.t);
	
	switch (p) {
		case perm('L', 'L'):
			// Line - Line intersection
			break;
		case perm('L', 'C'):
		case perm('C', 'L'):
			// Line - Circle intersection
			break;
		case perm('C', 'C'):
			// Circle - Circle intersection
			break;

	}
	return pv;
}
