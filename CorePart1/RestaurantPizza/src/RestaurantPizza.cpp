//============================================================================
// Name        : RestaurantPizza.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<Pizza.h>
#include<Receiver.h>
#include<Delivery.h>
using namespace std;

int main() {

	Pizza margarita("Margarita",5.00);
	Pizza kaprichoza("kaprichoza",10);

	Address sofia(1,"Sofia",15);
	Address plovdiv(1,"Plovdiv",10);

	Receiver lubo("Lubo",sofia);
	lubo.addAddress(plovdiv);


	return 0;
}
