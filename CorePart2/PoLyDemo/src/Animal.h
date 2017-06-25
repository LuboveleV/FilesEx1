/*
 * Animal.h
 *
 *  Created on: May 23, 2017
 *      Author: LyBo-Pc
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_
#include<iostream>
using namespace std;

class Animal {
protected:
	void baubau();
public:
   virtual
   void sound();
   void djaf();
	Animal();
	virtual ~Animal();
};

#endif /* ANIMAL_H_ */
