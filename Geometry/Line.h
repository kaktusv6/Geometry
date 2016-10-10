//
// Created by vasiliy on 10.10.16.
//

#ifndef LAB1BASEGEOMETRY_LINE_H
#define LAB1BASEGEOMETRY_LINE_H

#include "Point.h"
#include "Vector.h"

template<int Size>
class Line {
	Point<Size> point;
	Vector<Size> vector;
public:
	Line() {}
	Line(Point<Size>, Vector<Size>);

	~Line() {}
};

#endif //LAB1BASEGEOMETRY_LINE_H
