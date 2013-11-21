/*
 * bloodtest.hpp
 *
 *  Created on: Nov 21, 2013
 *      Author: hameddaleeryan
 */
/*
 * bloodtest.h
 *
 *  Created on: Nov 12, 2013
 *      Author: hameddaleeryan
 */

#include <sys/select.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <iosfwd>
#include <time.h>
#include "bloodtest.cpp"
using namespace std;


#define PATIENT_HPP_

class bloodTest{
private:
	string madmin;
	int mTime;
	int mDAte;

public:
	bloodTest();
	void oppendToFile(int para);
	void oppendToFile(string para);
	void get();
};
class completebloodcount : public bloodtest
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
	int mcalcium, mMagnesium, mChloride;
public:
	whitebloodsell();
	void getWhitebloodcell();
	void testWhitebloodcell();

};
class redbloodcell :public bloodTest{
private:
	int mtotalcholesterol, mLDLcholesterol, mHDLcholesterol;
public:
	void getRBC();
	void testRBC();
};
#endif // PATIENT_HPP_




