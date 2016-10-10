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

/* --------------- Methods and Operators of Points --------------- */

template<int Size>
Point<Size>::Point(double _default) {
	for(double e : components) {
		e = _default;
	}
}
template<int Size>
double Point<Size>::operator[](int index) {
	try {
		if (0 > index || index >= Size) {
			throw ExeptionOutOfRang();
		}
	}
	catch (ExeptionOutOfRang e) {
		e.why();
	}

	return components[index];
}

/* --------------- Operators --------------- */

template<int Size>
Point<Size> operator+(Point<Size> a, Point<Size> b) {
	Point<Size> c;
	for(int i = 0; i < Size; i++){
		c[i] = a[i] + b[i];
	}
	return c;
}
template<int Size>
Vector<Size> operator-(Point<Size> a, Point<Size> b) {
	Vector<Size> c;
	for(int i = 0; i < Size; i++){
		c[i] = a[i] - b[i];
	}
	return c;
}
template<int Size>
Point<Size> operator+(Point<Size> a, Vector<Size> b) {
	Point<Size> c;
	for(int i = 0; i < Size; i++){
		c[i] = a[i] + b[i];
	}
	return c;
}
template<int Size>
Point<Size> operator-(Point<Size> a, Vector<Size> b) {
	Point<Size> c;
	for(int i = 0; i < Size; i++){
		c[i] = a[i] - b[i];
	}
	return c;
}
#endif //LAB1BASEGEOMETRY_POINT_H
