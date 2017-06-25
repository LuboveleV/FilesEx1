//============================================================================
// Name        : MatrixArrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "coutMatrix.h"
using namespace std;

int main() {
	int n;
	cout<<"Enter n:";
	cin>>n;

	int array[n][n];
	for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"Enter element on ["<<i<<"]["<<j<<"]:";
			cin>>array[i][j];
		}
		cout<<endl;
	}
	coutMatrix(array[0],n);
	int sumDiagonal=0;
//	for(int i =0;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(i==j){
//				sumDiagonal+=array[i][j];
//			}
//		}
//	}
	for(int i =0;i<n;i++){
		sumDiagonal+=array[i][i];
	}
    int product=1;
    int count=0;
	for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>j){
				product*=array[i][j];
			}
			if(j>i){
				count++;
			}
		}
	}
	int sumObrDiag=0;
	for(int i=n-1,j=0;i>=0;i--,j++){
		sumObrDiag+=array[i][j];
	}
	cout<<"sum of diagonal is:"<<sumDiagonal<<endl;
	cout<<"product is:"<<product<<endl;
	cout<<"counter is:"<<count<<endl;
	cout<<"obr diag:"<<sumObrDiag<<endl;

	return 0;
}
