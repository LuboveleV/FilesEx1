/*
 * Cat.h
 *
 *  Created on: May 23, 2017
 *      Author: LyBo-Pc
 */

#ifndef CAT_H_
#define CAT_H_
#include<iostream>
using namespace std;

#include "Animal.h"

class Cat: public Animal {
public:
	void sound();
	Cat();
	virtual ~Cat();
};

#endif /* CAT_H_ */
