//
// Created by vasiliy on 07.10.16.
//

#ifndef LAB1BASEGEOMETRY_VECTOR_H
#define LAB1BASEGEOMETRY_VECTOR_H

template<int Size>
class Vector {
	double cmoponents[Size];
public:
	Vector();
	Vector(double);

	double operator[] (int);
};

template<int Size>
double operator* (Vector<Size> a, Vector<Size> b) {
	double s = 0;
	for(int i = 0; i < Size; i++){
		s += a[i]*b[i];
	}
	return s;
}

#endif //LAB1BASEGEOMETRY_VECTOR_H
