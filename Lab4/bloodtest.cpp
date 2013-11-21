/*
 * bloodtest.cpp
 *
 *  Created on: Nov 21, 2013
 *      Author: hameddaleeryan
 */

#include "bloodtest.hpp"
//constructor

bloodTest:: bloodTest()
{
	madmin = "unknown";
	mTime = 0;
	mDate = 0;

}
completebloodcount:: completebloodcount(){
	mgender = "unknown";
	mwhiteblood = 0;
	mredblood = 0;
	mplatelet = 0;
}
whitebloodcell:: whitevloodcell(){
	mcalcium = 0;
	mchloride = 0;
	mmagnesium = 0;
}
redbloodcell:: redbloodcell(){
	mtotalcholesterol = 0;
	mLDLcholesterol = 0;
	mHDLcholesterol = 0;
}

}
void bloodtest:: get(){
	cout<< "please select one of the following"<< endl;
	cout<< "A physician"<< endl;
	cout<< "B Radiologist"<< endl;
	cout<< "nurse"<<endl;
	cin>> "mAdmin";
	cout<< "please enter the date"<<endl;
	cin>> mdate;
	cout<< "please enter the time"<<endl;
	cin>> mtime;
}
void completebloodcout:: getCBC(){

}
