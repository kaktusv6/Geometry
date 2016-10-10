//
// Created by vasiliy on 10.10.16.
//

#ifndef LAB1BASEGEOMETRY_SPHERE_H
#define LAB1BASEGEOMETRY_SPHERE_H

#include "Point.h"

template<int Size>
class Sphere {
	Point<Size> point;
	double radius;
public:
	Sphere() {}
	Sphere(Point<Size>, double);

	~Sphere() {}
};

template<int Size>
Sphere<Size>::Sphere(Point<Size> p, double r) : point(p), radius(r) { }

#endif //LAB1BASEGEOMETRY_SPHERE_H
