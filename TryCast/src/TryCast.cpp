//============================================================================
// Name        : TryCast.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<exception>
using namespace std;
class CBase { virtual void dummy() { } };

class CDelivered : public CBase { int a;};

class CUnknown { int b;};

void print(char * str)
{
	cout<<str<<endl;
}
int main() {
try{
	CBase *pba = new CDelivered();
	CBase *pbb = new CBase();
	CDelivered *pd;
	CUnknown *unknown;
	const char* c  = "Const cast";

	if(pd=dynamic_cast<CDelivered*>(pba))
	{
		cout<<"NULL pointer on dynamic cast"<<endl;
	}
	if(pd = static_cast<CDelivered*>(pbb)){
		cout<<"NULL pointer on static cast type"<<endl;
	}
    if(unknown = reinterpret_cast<CUnknown*>(pba))
    {
    	cout<<"Reinterpred"<<endl;
    }
    print(const_cast<char*>(c));
} catch (exception& e) { cout<<"Exception: "<<e.what();}

	return 0;
}
