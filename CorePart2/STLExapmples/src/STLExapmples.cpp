//============================================================================
// Name        : STLExapmples.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> mostFrequentNumber(vector<int>,int);
int main() {
	//�� �� ������ ������� ����� ������ N-�� ����� � ���-����� �������� � ����� �����

	int numbers[] = {9,8,7,6,5,5,4,1,1,1};

	vector<int> digits(numbers,numbers+10);

	vector<int> nDigits = mostFrequentNumber(digits,2);
	for(size_t i = 0; i < nDigits.size(); i++)
	{
		cout<<nDigits[i]<< " ";
	}




	return 0;
}

vector<int> mostFrequentNumber(vector<int> vectorFromInts,int number){
	map<int,int> mapExample;
    for(size_t i = 0; i < vectorFromInts.size(); i++){
    	int numberExample = vectorFromInts[i];
    	if(mapExample.find(numberExample)==mapExample.end()){
    		mapExample[numberExample]=1;
    	}
    	else
    	{
    		mapExample[numberExample] = mapExample[numberExample] + 1;
    	}
    }

    int maxCount = 0;
    for(map<int,int>::iterator it = mapExample.begin();it != mapExample.end();it++)
    {
    	int val = it->second;
    	if(val > maxCount)
    	{
    		maxCount=val;
    	}
    }
    vector<int> numbersMaxCount;
    for(map<int,int>::iterator it = mapExample.begin();it !=mapExample.end();it++)
    {
    	int val = it->second;
    	if(val == maxCount)
    	{
    		numbersMaxCount.push_back(it->first);
    	}
    }
    vector<int> result;


    for(map<int,int>::iterator it=mapExample.begin();it!=mapExample.end();it++)
    {
    	cout<<it->first<<" "<<it->second<<endl;
    }

    for(int i =0;i<number;i++)
    {
    	result.push_back(numbersMaxCount[i]);
    }
    return result;
}
