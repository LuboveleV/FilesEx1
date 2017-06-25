/*
 * Foo.h
 *
 *  Created on: May 27, 2017
 *      Author: LyBo-Pc
 */

#ifndef FOO_H_
#define FOO_H_
#include<iostream>


class Foo {
private:
	 Foo* a;
public:
	Foo();
	Foo(const Foo&);
	virtual ~Foo();
	const Foo &operator=(const Foo& t);

};

#endif /* FOO_H_ */
