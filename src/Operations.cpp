/*
 * Operations.cpp
 *
 *  Created on: May 16, 2017
 *      Author: LyBo-Pc
 */

#include "Operations.h"


Operations::Operations(const char* path):file(path,ios::in | ios::out|ios::binary) {
	if(!file){
		cerr<<"File could not be opened"<<endl;
		exit(1);
	}

}

int Operations::enterChoice() {

	cout << "\nEnter your choice" << endl
	 << "1 - store a formatted text file of accounts" << endl
	 << " called \"hardware.txt\" for printing" << endl
	 << "2 - update tool" << endl
	 << "3 - add a new tool" << endl
	 << "4 - delete tool" << endl
	 << "5 - end program\n? ";

	int menuChoice;
	cin>>menuChoice;
	return menuChoice;
}

void Operations::createTextFile() {

	ofstream outputFile("text.txt",ios::out);
	if(!outputFile){
		cout<<"File coudn`t be created";
		exit(1);
	}
	outputFile<<left<<setw(10)<<"Tool number: "<<setw(10)<<"Tool name"<<setw(10)<<"Tool quantity"
			<<setw(10)<<"Tool price:"<<endl;

	file.seekg(0);
	Tool tool;
    file.read( reinterpret_cast< char * >( &tool ),
	sizeof( Tool ) );

    while(!file.eof()){
    	if(tool.getNumber()!=0)
    		outputLine(file,tool);

    	file.read( reinterpret_cast< char * >( &tool ),
    	 sizeof( Tool ) );
    }
}

void Operations::updateRecord() {
	int toolNumber = getTool("Enter number of tool :");

	file.seekg((toolNumber - 1)*sizeof(Tool));

	Tool tool;
	file.read(reinterpret_cast <char*>(&tool),sizeof(Tool));

	if(tool.getQuantity()!=0){
		outputLine(cout,tool);

		cout<<"Enter number (+) or number(-)";
		double change;
		cin>>change;

		double oldQuantity=tool.getQuantity();
		tool.setQuantity(oldQuantity+change);
		outputLine(cout,tool);

		file.seekp((toolNumber -1)*sizeof(Tool));
		file.write(reinterpret_cast<char*>(&tool),sizeof(Tool));
	}
	else // display error if account does not exist
	 cerr << "Tool #" << toolNumber
	 << " has no information." << endl;

}

void Operations::newRecord() {

	int toolNumber = getTool("Enter new tool number");

	file.seekg((toolNumber -1)*sizeof(Tool));

	Tool tool;
	file.read(reinterpret_cast<char*>(&tool),sizeof(Tool));

	if(tool.getNumber()== 0){
		string name;
		double price;
		int quantity;
		cout<<"Enter name,quantity,price";
		cin>>name;
		cin>>quantity;
		cin>>price;
		tool.setName(name);
		tool.setQuantity(quantity);
		tool.setPrice(price);
		tool.setNumber(toolNumber);

		file.seekp((toolNumber -1)*sizeof(Tool));
		file.write(reinterpret_cast<char*>(&tool),sizeof(Tool));
	}
	else{
		cerr<<"Tool number#"<<toolNumber<<" is busy,becouse there is already tool in this number";
	}
}

void Operations::deleteRecord() {
	int toolNumber = getTool("Enter tool number");

	file.seekg((toolNumber -1)*sizeof(Tool));
	Tool tool;
	file.read(reinterpret_cast<char*>(&tool),sizeof(Tool));

	if(tool.getNumber()!=0){

		Tool emptyTool;

		file.seekp((toolNumber-1)*sizeof(Tool));
		file.write(reinterpret_cast<char*>(&emptyTool),sizeof(Tool));
		cout<<"Tool is deleted";
	}
	else{
		cout<<"Tool #"<<toolNumber<<"already was empty";
	}
}

void Operations::outputLine(ostream& output, const Tool& outputFile) {
	output << left << setw( 10 ) << outputFile.getNumber()
	 << setw( 16 ) << outputFile.getName()
	 << setw( 11 ) << outputFile.getQuantity()
	 << setw( 10 ) << setprecision( 2 ) << right << fixed
	 << showpoint << outputFile.getPrice() << endl;
}

int Operations::getTool(const char* const prompt) {
	int toolNumber;
	do{
		cout<<prompt<<"(1-100):";
		cin>>toolNumber;
	}while(toolNumber<1||toolNumber>100);
	return toolNumber;
}

Operations::~Operations() {
	// TODO Auto-generated destructor stub
}

