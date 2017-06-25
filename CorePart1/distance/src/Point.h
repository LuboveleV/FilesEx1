/*
 * Point.h
 *
 *  Created on: Apr 11, 2017
 *      Author: LyBo-Pc
 */

#ifndef POINT_H_
#define POINT_H_
#include <iostream>
#include"Distance.h"
using namespace std;
template<class T>
class Point {
private:
	T x;
	T y;
public:
    T Point();
	T Point(T,T);
	T setX(T);
	T setY(T);
	T getY();
	T getX();


};

#endif /* POINT_H_ */
