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
 whitebloodcell:: whitebloodcell(){
	mcalcium = 0;
	mChloride = 0;
	mMagnesium = 0;
}
  redbloodcell :: redbloodcell(){
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
 void completebloodcount :: getCBC(){
	cout<< "patient gender?"<<endl;
	cin>> mgender;
 	cout<< "number of white blood cells count in million"<<endl;
	cin>> mWhiteBlood;
	cout<< "number of red blood cell in million"<<endl;
	cin>> mredblood;
	cout<<"the platelet value in million"<<endl;
	cin>> mplatelet;
}
  void completebloodcount :: test(){
	if(4500<=mWhiteBlood<=10000){
		cout<<"normal number of white blood cell"<<endl;
	}
		else if(mWhiteBlood<4500){
			cout<<"white blood cells is below normal range"<<endl;

	}
		else if(mWhiteBlood>10000){
			cout<<"white blood cell is above normal range"<<endl;
		}
	if (5<=mredblood>6){
		cout<<"red blood cell is in normal range"<<endl;
	}
	else if(mredblood <5){
		cout<<"red blood is below normal range"<<endl;
	}
	else if(mredblood>6){
		cout<<"red blood cell is above normal range"<<endl;
		if(140000<=mplatelet<=450000){
			cout<<"platelet count is in a normal range"<<endl;
		}
		else if(mplatelet<140000){
			cout<<"platelet count is below normal range"<<endl;
		}
		else if(mplatelet>450000){
			cout<<"platelet count is above normal range"<<endl;
		}
	}

void redbloodcell::getRBC(){

		cout<<" enter total cholesterol level"<<endl;
		cin>> mtotalcholesterol;
		cout<<"enter the LDL cholesterol level"<<endl;
		cin>> mLDLcholesterol;
		cout<<"enter the HDL cholesterol level"<<endl;
		cin>> mHDLcholesterol;

	};

void redbloodcell :: testRBC(){

		if (mTotalCholesterol < 200 ){

			cout << "the total Cholesterol level is desirable" <<endl;
		}
		else if( 200 <= mTotalCholesterol <= 239 ){
			cout << "Total cholesterol level is boarder line high" <<endl;

		}
		else if( mTotalCholesterol >= 240){

			cout << "The total Cholesterol Level is High" <<endl;
		}


		if ( mLDLCholesterol < 100 ){

			cout << "The LDL cholesterol level is optimal" <<endl;
		}
		else if( 100 <= mLDLCholesterol <= 129 ){
			cout << "The LDL cholesterol is near optimal above optimal " <<endl;

		}
		else if(130 <= mLDLCholesterol <= 159){

			cout << "The LDL Cholesterol level is boarder line high" <<endl;
		}

		else if (160<= mLDLCholesterol <= 189 ){

			cout << "The LDL Cholesterol level is high" <<endl;
		}
		else if ( mLDLCholesterol >= 190 ){

			cout << "The LDL Cholesterol level is above very high" <<endl;
		}

		if( mHDLCholesterol < 40 ){
			cout << "HDL Cholesterol level is very low and there is a major risk of heart disease" <<endl;

		}
		else if( 40< mHDLCholesterol > 59){

			cout << "HDL Cholesterol level is in a good range" <<endl;
		}
		else if( mHDLCholesterol > 60){

			cout << "HDL Cholesterol level is protective against heart disease" <<endl;
		}
	}

 void whitebloodcell :: getWBC() {

		cout<< "Enter the ionized calcium level in mg/dL "<<endl;
		cin>> mCalcium;
		cout<< "Enter the Serum cholride level in mEq/L"<<endl;
		cin>> mChloride;
		cout<< "Enter the serum magnesium level in mg/dL "<<endl;
		cin>> mMagnesium;


	}


void	whitebloodcell :: testWBC(){

		if (4.4 <= mCalcium <= 5.3 ){

			cout << "The ionized calcium is normal" <<endl;
		}
		else if( mCalcium < 4.4 ){
			cout << "The ionized calcium is below normal" <<endl;

		}
		else if( mCalcium > 5.3){

			cout << "The ionized calcium is above normal" <<endl;
		}


		if ( 96 <= mChloride <= 106 ){

			cout << "The serum chloride is in normal ranges" <<endl;
		}
		else if(  mChloride < 96 ){
			cout << "The serum chloride is below normal ranges (hyperchloremia)" <<endl;

		}
		else if( mChloride > 106){

			cout << "The serum chloride is above normal ranges" <<endl;
		}

		if ( 1.7 <= mMagnesium <= 2.2 ){

			cout << "the serum magnesium level is within normal ranges" <<endl;
		}
		else if ( mMagnesium < 1.7){

			cout << "the serum magnesium level is below normal ranges" <<endl;
		}

		else if( mMagnesium > 2.2 ){
			cout << "the serum magnesium level is above normal ranges" <<endl;

		}
	}

  }

  void getannotation()
