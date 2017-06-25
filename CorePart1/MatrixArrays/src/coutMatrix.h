/*
 * coutMatrix.h
 *
 *  Created on: Apr 12, 2017
 *      Author: LyBo-Pc
 */

#ifndef COUTMATRIX_H_
#define COUTMATRIX_H_
#include<iostream>
using namespace std;


void coutMatrix(int *array,int n){

	for(int i =0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<*(array+i*n+j)<<" ";
			}
			cout<<endl;
		}
}


#endif /* COUTMATRIX_H_ */
