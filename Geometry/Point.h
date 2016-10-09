//
// Created by vasiliy on 05.10.16.
//

#ifndef LAB1BASEGEOMETRY_POINT_H
#define LAB1BASEGEOMETRY_POINT_H

#include <iostream>

template<int Size>
class Point {
	double components[Size];
public:
	Point() {}
	Point(double);

	double operator[](int);

	class ExeptionOutOfRang {
	public:
		ExeptionOutOfRang() {}
		void why() {
			std::cout << "Out of range" << std::endl;
		}
	};
};

/* --------------- Methods of Points --------------- */

template<int Size>
Point<Size>::Point(double _default) {
	for(double e : components) {
		e = _default;
	}
}
template<int Size>
double Point<Size>::operator[](int index) {
	if (0 > index || index >= Size) {
		throw;
	}
	return components[index];
}

/* --------------- Operators of Points --------------- */

template<int Size>
Point<Size> operator+(Point<Size> a, Point<Size> b) {
	Point<Size> c;
	for(int i = 0; i < Size; i++){
		c[i] = a[i] + b[i];
	}
}


#endif //LAB1BASEGEOMETRY_POINT_H
