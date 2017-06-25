//============================================================================
// Name        : Lecture1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>
using namespace std;

int result(int a=1,int b=1){
	return a+b;
}
int number=12;
int main() {
   /* const int arraySize = 11;
    int n[arraySize]= {1,2,3,4,5,6,5,4,3,2,1};
    for(int i=0;i<arraySize;i++){

    	if(i==0){
    		cout<<"0-9:";
    	}
    	else if(i==10){
    		cout<<"100:";
    	}
    	else{
    		cout<<i*10<<"-"<<(i*10)+9<<":";
    	}
    	for(int j=0;j<n[i];j++){
    		cout<<"*";
    	}
    	cout<<endl;
    }*/
//	int number=10;
	int &numbers=::number;
	cout<<number<<endl;
     int res=result(2);
     cout<<res;
return 0;
}
