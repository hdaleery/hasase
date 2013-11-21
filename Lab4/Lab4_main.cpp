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

#include "bloodtest.hpp"

		int main() {
	int choose;
	int i;

		// file opened here
myfile.open;
while(1) {
	// call base function here
	bloodTest callfunc;
	callfunc.get(;)
	completebloodcount callCBC;
	whitebloodcellcount callWBC;
	redbloodcellcount callRBC;

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
		callCBC.test.CBC();
		// callfunc.opentofile
		break;

	case 2:
		callWBC.getWBC();
	    callWBC.test();
	  break;
	case 3;
	callRBC.getRBC();
	callRBC.testRBC();
	break;
	case 5:
		i=0;
		break;
	}
}
myfile.close();
return0;
}







