//============================================================================
// Name        : STLExamples.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<map>
using namespace std;

map<int,int> mapforSalariesCount(vector<int>);


int main() {
	// 2 задача  - коя заплата колко пъти се среща; всяка заплата колко души са я взели
    // 1299 4550 445 5667 888 4550  888

	int sal[] = { 1299,4550,445,5667,888,4550,1299};
	vector<int> salaries(sal,sal+7);
    map<int,int> mapSalCount = mapforSalariesCount(salaries);
    for(map<int,int>::iterator it=mapSalCount.begin();it!=mapSalCount.end();it++)
    {
    	cout<<it->first<<it->second;
    }

return 0;
}

map<int,int> mapforSalariesCount(vector<int> salaries)
{
	     map<int,int> mapSalaries;
	    for(int i =0;i<salaries.size();i++)
	    {
	    	int salary = salaries[i];
	    	if(mapSalaries.find(salary)==mapSalaries.end()){
	    		mapSalaries[salary]=1;
	    	}
	    	else
	    	{
	    		mapSalaries[salary]=mapSalaries[salary]+1;
	    	}
	    }
	    return mapSalaries;
}

