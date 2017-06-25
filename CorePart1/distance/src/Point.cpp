/*
 * Point.cpp
 *
 *  Created on: Apr 11, 2017
 *      Author: LyBo-Pc
 */

#include "Point.h"
template<class T>
T Point<T>::Point() {
	this->x=0;
	this->y=0;

}
template<class T>
T Point<T>::Point(T x, T y) {
	setX(x);
	setY(y);
}
template<class T>
T Point<T>::setX(T x) {
	 this->x=x;
}
template<class T>
T Point<T>::setY(T y) {
	this->y=y;
}
template<class T>
T Point<T>::getY() {
	return this->y;
}
template<class T>
T Point<T>::getX() {
	return this->x;
}



