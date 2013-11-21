/*
 * bloodtest.cpp
 *
 *  Created on: Nov 21, 2013
 *      Author: hameddaleeryan
 */

#include "bloodtest.hpp"
using namespace std;

//constructor

bloodTest:: bloodTest()
{
	madmin = "unknown";
	mTime = 0;
	mDate = 0;

}
completebloodcount:: completebloodcount(){
	mgender = "unknown";
	mWhiteBlood = 0;
	mredblood = 0;
	mplatelet = 0;
}
Whitebloodcell:: WhiteBoodcell(){
	mcalcium = 0;
	mchloride = 0;
	mmagnesium = 0;
}
redbloodcell:: redbloodcell(){
	mtotalcholesterol = 0;
	mLDLcholesterol = 0;
	mHDLcholesterol = 0;
}


void bloodTest:: get(){
	cout<< "please select one of the following"<< endl;
	cout<< "A physician"<< endl;
	cout<< "B Radiologist"<< endl;
	cout<< "nurse"<<endl;
	cin >> madmin;
	cout<< "please enter the date"<<endl;
	cin>> mDate;
	cout<< "please enter the time"<<endl;
	cin>> mTime;
}
void completebloodcount:: getCBC(){

}
