//============================================================================
// Name        : PoLyDemo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include"Animal.h"
#include"Cat.h"

int main() {
	Animal *someAn = new Animal();
	Animal *cat = new Cat();
	Cat *smth = 0;
	someAn->sound();
	cout<<endl;
	cat->sound();

	cout<<endl;

	smth->sound();
	return 0;
}
