//============================================================================
// Name        : charArray.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char array[10];
	cin.getline(array,40);
	for(int i = 0 ; i<15 ; i++){
		cout<<array[i]<<endl;
	}
return 0;
}
