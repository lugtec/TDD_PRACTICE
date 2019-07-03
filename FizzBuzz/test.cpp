/*************************************************************************
	> File Name: test.cpp
	> Author: luguigui 
	> Mail: luguigui@tucodec.com
	> Created Time: Wed 03 Jul 2019 11:46:44 AM CST
 ************************************************************************/
#include "./fizzBuzz.h"
#include "gtest/gtest.h"

#include<iostream>
using namespace std;

FizzBuzz fb;

TEST (fzTest, FizzNos) { 
        EXPECT_STREQ("Fizz",fb.printFizzBuzz(3).data());
}
 

TEST (fzTest, BuzzNos) { 
        EXPECT_STREQ("Buzz",fb.printFizzBuzz(5).data());
}

TEST (fzTest, FizzBuzzNos) { 
        EXPECT_STREQ("FizzBuzz",fb.printFizzBuzz(15).data());
}


TEST (fzTest, failNumNos) { 
        EXPECT_STREQ("13",fb.printFizzBuzz(13).data());
}

TEST (fzTest, failFZNos) { 
        EXPECT_STREQ("Fizz",fb.printFizzBuzz(13).data());
}

 int main(int argc, char **argv) {
       ::testing::InitGoogleTest(&argc, argv);
       return RUN_ALL_TESTS();
 }
