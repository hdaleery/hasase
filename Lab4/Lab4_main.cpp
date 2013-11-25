/*
 * Lab4_main.cpp
 *
 *  Created on: Nov 21, 2013
 *      Author: hameddaleeryan
 */


/*
 * bloodtest.cpp
 *
 *  Created on: Nov 12, 2013
 *      Author: hameddaleeryan
 */
#include <sys/select.h>
//#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <iosfwd>
#include <time.h>
#include "bloodtest.hpp"
using namespace std;
		int main() {
	int choose;
	int i;
	fstream myfile;
		// file opened here
myfile.open("bloodtest.text");
while(1) {
	// call base function here
	bloodTest callfunc;
	callfunc.get();
	completebloodcount callCBC;
	whitebloodcell callWBC;
	redbloodcell callRBC;
	annotation callant;


	// main menu
	cout<< "select the blood type"<<endl;
	cout<< "A complete blood count"<<endl;
	cout<< "B white blood cell test"<<endl;
	cout<< "C red blood cell test"<<endl;
	cout<< "D exit" <<endl;
	cin >> choose;
	myfile.open ("bloodtest.txt");
	switch(choose){
	case 1:
		callCBC.getCBC();
		callCBC.test();
		// callfunc.opentofile
		break;

	case 2:
		callWBC.getWhitebloodcell();
	    callWBC.testWhitebloodcell();
	  break;
	case 3:
	callRBC.getRBC();
	callRBC.testRBC();
	break;
	case 4:
	 callant.getannotation();
		cout<<"wite your annotation"<<endl;
		cin>>getannotation;
		break;

	case 5:
		i=0;
		break;
	}
}
myfile.close();
return 0;
}







