//============================================================================
// Name        : vector.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<iomanip>
using namespace std;

void outputVector(const vector<int>&);
void inputVector(vector<int>&);
int main() {
	vector<int> integers(7);//7 elements vector

	return 0;
}
void outputVector(const vector<int>&array){

	size_t i; //declare control variable;
	for(i=0;i<array.size();i++){
		cout<<setw(12<<array[i]);
		if((i+1)%4==0)//4 numbers per row of output
			cout<<endl;
	}
}




