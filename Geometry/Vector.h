//
// Created by vasiliy on 07.10.16.
//

#ifndef LAB1BASEGEOMETRY_VECTOR_H
#define LAB1BASEGEOMETRY_VECTOR_H

#include <cmath>

template<int Size>
double operator* (Vector<Size>, Vector<Size>);
template<int Size>
class Vector {
	double cmoponents[Size];
public:
	Vector();
	Vector(double);

	double operator[] (int);

	double angle();
	double length();
};

template<int Size>
double operator* (Vector<Size> a, Vector<Size> b) {
	double s = 0;
	for(int i = 0; i < Size; i++){
		s += a[i]*b[i];
	}
	return s;
}

template<int Size>
double Vector<Size>::angle() {
	return std::acos(cmoponents[0] / std::sqrt((*this) * (*this)));
}
template<int Size>
double Vector<Size>::length() {
	return std::sqrt((*this) * (*this));
}


template<int Size>
double angleBeetwenVectors(Vector<Size> a, Vector<Size> b) {
	return std::abs(a.angle() - b.angle());
}
#endif //LAB1BASEGEOMETRY_VECTOR_H
