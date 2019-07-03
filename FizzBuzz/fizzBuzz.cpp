/*************************************************************************
	> File Name: fizzBuzz.cpp
	> Author: luguigui 
	> Mail: luguigui@tucodec.com
	> Created Time: Wed 03 Jul 2019 02:40:19 PM CST
 ************************************************************************/
#include "fizzBuzz.h"


string FizzBuzz::printFizzBuzz(int data)
{
    string turnDataStr=to_string(data);
    string retFiz=isFizz(data);
    string retBuz=isBuzz(data);
    
    return judgeRet(retFiz,retBuz,turnDataStr);

}


void FizzBuzz::setData(int data)
{
    m_data=data;
}


string FizzBuzz::isFizz(int data )
{
    string name="Fizz";
    if(data%3==0)
    {
       return name;
    }
     return to_string(data);
}


string FizzBuzz::isBuzz(int data )
{
    string name="Buzz";
    if(data%5==0)
    {
        return name;
    }
        
    return to_string(data);
    
}


string FizzBuzz::judgeRet(string retFiz,string retBuz,string turnDataStr )
{
    string fizbuz;

    if((retFiz!=turnDataStr)&&(retBuz!=turnDataStr))
    {
        fizbuz=retFiz+retBuz;
    }

    if((retFiz==turnDataStr)&&(retBuz==turnDataStr))
    {
        fizbuz=turnDataStr;
    }

    if((retFiz==turnDataStr)&&(retBuz!=turnDataStr))
    {
        fizbuz=retBuz;
    }
    
    if((retFiz!=turnDataStr)&&(retBuz==turnDataStr))
    {
        fizbuz=retFiz;
    }

    return fizbuz;

}
