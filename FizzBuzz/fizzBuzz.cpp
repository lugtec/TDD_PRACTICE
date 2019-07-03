/*************************************************************************
	> File Name: fizzBuzz.cpp
	> Author: luguigui 
	> Mail: luguigui@tucodec.com
	> Created Time: Wed 03 Jul 2019 02:40:19 PM CST
 ************************************************************************/
#include "fizzBuzz.h"

void FizzBuzz::setData(int data)
{
    m_data=data;
}


int FizzBuzz::isFizz(int data,string *res )
{
    string name="Fizz";
    if(data%3==0)
    {
        *res=*res+name;
        return 0;
    }
        
     return -1;
    

}


int FizzBuzz::isBuzz(int data,string *res )
{
    string name="Buzz";
    if(data%5==0)
    {
        *res=*res+name;
        return 0;
    }
        
    return -1;
    
}


string FizzBuzz::printFizzBuzz(int data)
{
    string fizbuz;
    int retFiz=0;
    int retBuz=0;
    
    retFiz=isFizz(data,&fizbuz);
    retBuz=isBuzz(data,&fizbuz);

    if((retFiz<0)&&(retBuz<0))
    {
        fizbuz=to_string(data);
    }
    
    return fizbuz;
}
