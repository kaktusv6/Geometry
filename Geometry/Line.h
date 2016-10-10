//
// Created by vasiliy on 10.10.16.
//

#ifndef LAB1BASEGEOMETRY_LINE_H
#define LAB1BASEGEOMETRY_LINE_H

#include "Vector.h"
#include "Point.h"

template<int Size>
class Line {
	Point<Size> point;
	Vector<Size> vector;
public:
	Line() {}
	Line(Point<Size>, Vector<Size>);
	Line(Point<Size>, Point<Size>);

	~Line() {}
};

template<int Size>
Line<Size>::Line(Point<Size> p, Vector<Size> v) : point(p), vector(v) { }
template<int Size>
Line<Size>::Line(Point<Size> p1, Point<Size> p2) : point(p1), vector(p1 - p2) { }

template <int Size>
class Ray : public Line {
public:
	Ray() : Line() {}
	Ray(Point<Size> p, Vector<Size> v) : Line(p, v) { }
	Ray(Point<Size> p1, Point<Size> p2) : Line(p1, p2) { }

	~Ray() {}
};
template <int Size>
class Segment : public Line {
	Point<Size> point2;
public:
	Segment() : Line() {}
	Segment(Point<Size> p, Vector<Size> v) : Line(p, v), point2(p + v) { }
	Segment(Point<Size> p1, Point<Size> p2) : Line(p1, p2), point2(p2) { }

	~Segment() {}
};
#endif //LAB1BASEGEOMETRY_LINE_H
