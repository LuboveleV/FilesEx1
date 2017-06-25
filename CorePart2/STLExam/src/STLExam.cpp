//============================================================================
// Name        : STLExam.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <map>
#include "Items.h"
#include "pugixml.hpp"
#include<iterator>
#include<algorithm>
using namespace std;
map<int,int> countInts(vector<int>);
vector<int> findByKey(map<string,vector<int> >,string);
vector<Items> readXMLFile(string);
map<string,vector<int> > sortSecond(map<string,vector<int> >);
map<string,vector<int> > greaterK(map<string,vector<int> >,int);
vector<string> max3(map<string,vector<int> >);

int main() {

    int numbers[] = {1,2,3,4,5,5,5,5,6,7,3};
    vector<int> someIntVector(numbers,numbers+11);
    map<int,int> countingMap = countInts(someIntVector);
    for(map<int,int>::iterator it =countingMap.begin();it!=countingMap.end();it++ )
    {
    	cout<<"Number  "<<it->first<<"    Is in map :"<<it->second<<" times"<<endl;
    }

    cout<<"--------------------------------\n";
    map<string,vector<int> > testingMap;
    testingMap["somevalue"] = someIntVector;

    vector<int> testingVector = findByKey(testingMap,"somevalue");
    for(size_t i = 0 ;i<testingVector.size();i++)
    {
    	cout<<testingVector[i];
    }

    cout<<"\n--------------------------------\n";


    int shuffleNumbers[] = {5,4,2,8,2,11};
    vector<int> shuffleVector(shuffleNumbers,shuffleNumbers+6);
    map<string,vector<int> > mapWithShuffleNumbers ;
    mapWithShuffleNumbers["smth"] = shuffleVector;
    map<string,vector<int> > sortedMap = sortSecond(mapWithShuffleNumbers);
    for(map<string,vector<int> >::iterator it = sortedMap.begin();it!=sortedMap.end();it++)
    {
    	cout<<it->first<<": ";
    	vector<int> printing = it->second;
    	for(size_t i = 0;i<printing.size();i++)
    	{
    		cout<<printing[i]<< "   ";
    	}


    }
    cout<<"\n--------------------------------\n";

    map<string,vector<int> > mapGreaterK = greaterK(sortedMap,4);
    for(map<string,vector<int> >::iterator it = mapGreaterK.begin();it!=mapGreaterK.end();it++)
    {
    	cout<<it->first<<" ";
    	vector<int> smth = it->second;
    	for(size_t i = 0 ; i <smth.size();i++)
    	{
    		cout<<smth[i]<< "  ";
    	}
    }

	cout<<"\n--------------------------------\n";
	int one[] = {1,2,3,4,5,6,7,8,9,10};
	vector<int> ints1(one,one+10);
	int two[] = {1,3,5,7,9,11,13,15,17,19};
	vector<int> ints2(two,two+10);
	int three[] = {2,4,6,8,10,12,14,16,18,20};
	vector<int> ints3(three,three+10);
	int four[] = {3,5,7,9,11,13,15,17,19,21};
	vector<int> ints4(four,four+10);
	map<string,vector<int> > mapIntsss;
	mapIntsss["one"] = ints1;
	mapIntsss["two"] = ints2;
	mapIntsss["three"] = ints3;
	mapIntsss["four"] = ints4;

	vector<string> bestThree= max3(mapIntsss);
	for(size_t i =0;i<bestThree.size();i++)
	{
       cout<<"best name:["<<i+1<<"]"<< bestThree[i]<<endl;
	}
	return 0;
}
vector<string> max3(map<string,vector<int> > keyValues)
		{
	      vector<string> result;
	      vector<int> sumInts;
	      map<string,int> keyWithSums;
	      for(map<string,vector<int> >::iterator it = keyValues.begin();it!=keyValues.end();it++)
	      {
	    	  vector<int> unsortedInts = it->second;

	    	  int sum=0;
	    	  for(size_t i = 0;i<unsortedInts.size();i++){
	    		  sum+=unsortedInts[i];
	    	  }
	    	  sumInts.push_back(sum);
	    	  keyWithSums[it->first] =sum;
	      }

	      sort(sumInts.begin(),sumInts.begin()+sumInts.size());

	      for(map<string,int>::iterator it = keyWithSums.begin();it!=keyWithSums.end();it++)
	      {
	    	  for(size_t i = sumInts.size()-1;i >= sumInts.size()-3;i--){
	    		  if(it->second == sumInts[i])
	    		  {
	    			  result.push_back(it->first);
	    		  }
	    	  }
	      }

       return result;
		}
map<string,vector<int> > greaterK(map<string,vector<int> > greaterK,int K)
		{
	     map<string,vector<int> > result;
	     for(map<string,vector<int> >::iterator it=greaterK.begin();it!=greaterK.end();it++)
	     {
	    	 vector<int> testing = it->second;
	    	 vector<int> greaterThanK;
	    	 for(size_t i=0;i<testing.size();i++)
	    	 {
	    		 if(testing[i]>K)
	    		 {
	    			 greaterThanK.push_back(testing[i]);
	    		 }
	    	 }
	    	 result[it->first] = greaterThanK;
	     }
	     return result;
		}
map<string,vector<int> > sortSecond(map<string,vector<int> > keyValues)
		{
	      map<string,vector<int> > result;
	      map<string,vector<int> >::iterator it;
	      for(it=keyValues.begin();it!=keyValues.end();it++)
	      {
	    	  vector<int> sortedInt = it->second;
	    	  sort(sortedInt.begin(),sortedInt.begin()+sortedInt.size());
	    	  result[it->first] = sortedInt;
	      }
	      return result;
		}
vector<int> findByKey(map<string,vector<int> > keyValues,string key)
		{
	vector<int> result;
	for(map<string,vector<int> >::iterator it = keyValues.begin();it!=keyValues.end();it++)
	{
		if(it->first == key)
		{
			vector<int> ints = it->second;
			for(size_t i = 0 ;i<ints.size();i++)
			{
				result.push_back(ints[i]);
			}
		}
	}
	return result;
		}
vector<Items> readXMLFile(string xmlFile)
		{
	        vector<Items> resultVector;
	        pugi::xml_document doc;
			pugi::xml_parse_result result = doc.load_file(xmlFile.data());


		    pugi::xml_node itemsNode = doc.first_child();

		    Items someItem;
		    for(pugi::xml_node item = itemsNode.child("Item");item;item = item.next_sibling("Item")){
		    	pugi::xml_node atr;
		    	atr=item.next_sibling("name");
		    	someItem.setId(atr.attribute("id").as_int());
		    	someItem.setName(item.child("name").text().as_string());
		    	someItem.setPrice(item.child("price").text().as_double());
		    	someItem.setQuantity(item.child("quantity").text().as_int());

		    	resultVector.push_back(someItem);
		    }
		    return resultVector;
		}
map<int,int> countInts(vector<int> ints)
	{
	  map<int,int> someMap;
	  for(size_t i=0;i<ints.size();i++)
	  {
		  int element = ints[i];
		  if(someMap.find(element)==someMap.end())
		  {
			  someMap[element] = 1;
		  }
		  else
		  {
			  int val=someMap[element];
			  val++;
			  someMap[element] = val;
		  }
	  }
	return someMap;
    }
