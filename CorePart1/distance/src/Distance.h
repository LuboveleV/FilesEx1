/*
 * Distance.h
 *
 *  Created on: Apr 11, 2017
 *      Author: LyBo-Pc
 */

#ifndef DISTANCE_H_
#define DISTANCE_H_
#include "Point.h"
#include <cmath>
using namespace std;

template<class T>
T distance(T point1,T point2){
	T result=sqrt(pow((point2.getX()- point1.getX()),2)
			+ pow((point2.getY()-point1.getY()),2));
		return result;
}



#endif /* DISTANCE_H_ */
