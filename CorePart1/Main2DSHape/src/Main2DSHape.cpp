//============================================================================
// Name        : Main2DSHape.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Shape.h"
#include"Triangle.h"
#include"Rectangle.h"
#include"Trapezoid.h"
#include<vector>
using namespace std;

int main() {

	Rectangle rect(1,2,"red");
	Triangle  tria(3,4,"blue",5);
	Trapezoid trap(6,7,"green",8);
	rect.print();
	tria.print();
	trap.print();
    cout<<"---------------------------";
	vector<Shape*> figures;
	figures.push_back(&rect);
	figures.push_back(&tria);
	figures.push_back(&trap);
			for(int i =0;i<figures.size();i++){
				figures[i]->print();
			}
		return 0;
}
