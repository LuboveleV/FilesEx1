//============================================================================
// Name        : Services.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Address.h"
#include "Client.h"
#include "Package.h"
#include "Sender.h"
#include "Receiver.h"
#include "Payment.h"
#include<vector>


int main() {

	Address adr("Zdravec","Teteven",25);
	Payment payment("2017",14.3);
	Sender *sender=new Sender("Lubo",adr,payment);
	Receiver *receiver=new Receiver("Ivan",adr);
	vector<Client*> vectOfClients;
    vectOfClients.push_back(sender);
    vectOfClients.push_back(receiver);


    for(int i=0;i<vectOfClients.size();i++){
    	vectOfClients[i]->print();
    	/*Client* din = &vectOfClients[i];
    	if(Sender* s = dynamic_cast<Sender*>(din)){
    		s->print()
    	}*/
    }
	return 0;
}
