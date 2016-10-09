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
#endif //LAB1BASEGEOMETRY_VECTOR_H
