/*
 * bloodtest.hpp
 *
 *  Created on: Nov 21, 2013
 *      Author: hameddaleeryan
 */

#ifndef BLOODTEST_HPP_
#define BLOODTEST_HPP_

#include <sys/select.h>
//#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <iosfwd>
#include <time.h>
using namespace std;

class bloodTest{
private:
	string madmin;
	int mTime;
	int mDate;

public:
	bloodTest();
	void oppendToFile(int para);
	void oppendToFile(string para);
	void get();
};
class completebloodcount : public bloodTest{
private:
int mWhiteBlood, mredblood, mplatelet;
string mgender;

public:
// constructor
completebloodcount();
void getCBC();
void test();
};
class whitebloodcell : public bloodTest{
private:
	int mCalcium, mMagnesium, mChloride;
public:
	whitebloodcell();
	void getWhitebloodcell();
	void testWhitebloodcell();

};
class redbloodcell :public bloodTest{
private:
	int mTotalcholesterol, mLDLcholesterol, mHDLcholesterol;
public:
	redbloodcell();
	void getRBC();
	void testRBC();
};

class annotation : public bloodTest{
private:
	string annot;
public:
	void getannotation();

};



#endif /* BLOODTEST_HPP_ */
