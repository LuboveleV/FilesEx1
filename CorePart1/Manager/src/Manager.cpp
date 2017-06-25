//============================================================================
// Name        : Manager.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "ExpertInherit.h"
#include "ManagerClass.h"
#include "Address.h"
#include "JuniorExpert.h"
#include "SeiniorExpert.h"

int main() {

	Address addressLilli(2,"sofia",5);
	Address lubo(2,"teteven",10);
	ExpertInherit ei1("Lilli","Petrova","HR",20,0,addressLilli);
	JuniorExpert a("Lubo","Velev","HR",50,100,lubo,"neznam",6);
	a.print();
	cout<<"------------------";
	ei1.print();
	return 0;
}
