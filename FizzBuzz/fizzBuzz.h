/*************************************************************************
	> File Name: fizzBuzz.h
	> Author: luguigui 
	> Mail: luguigui@tucodec.com
	> Created Time: Wed 03 Jul 2019 02:20:36 PM CST
 ************************************************************************/

#ifndef _FIZZBUZZ_H
#define _FIZZBUZZ_H

#include<iostream>
using namespace std;

class FizzBuzz{

    private:
    int m_data;


    public:
    void setData(int data);
    string isFizz(int data);
    string isBuzz(int data);
    string judgeRet(string,string,string);
    string printFizzBuzz(int data);

};




#endif
