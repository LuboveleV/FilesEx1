//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a=23;
	cout<<a<<endl;
	cout<<&a<<endl;

	int *aPtr;
	cout<<aPtr<<endl;
	aPtr=&a;
	cout<<*aPtr<<endl;

	a=26;
	cout<<*aPtr;


	return 0;
}
