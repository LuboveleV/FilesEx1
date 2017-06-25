/*
 * Foo.cpp
 *
 *  Created on: May 27, 2017
 *      Author: LyBo-Pc
 */

#include "Foo.h"
using namespace std;

Foo::Foo() {
	cout<<"1";

}

Foo::Foo(const Foo&) {
	cout<<"2";
}

Foo::~Foo() {
  cout<<"4";
	// TODO Auto-generated destructor stub
}

const Foo& Foo::operator =(const Foo& t) {
	cout<<"5";
	return *this;

}
