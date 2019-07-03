/*************************************************************************
	> File Name: test.cpp
	> Author: luguigui 
	> Mail: luguigui@tucodec.com
	> Created Time: Wed 03 Jul 2019 11:46:44 AM CST
 ************************************************************************/
#include "square.h"
#include "gtest/gtest.h"

#include<iostream>
using namespace std;




TEST (SquareRootTest, PositiveNos) { 
        EXPECT_EQ (18.0, squareroot (324.0));
}
 
 TEST (SquareRootTest, ZeroAndNegativeNos) { 
         ASSERT_EQ (0.0, squareroot (0.0));
 }

 TEST (SquareRootTest, Zero1AndNegativeNos) { 
         ASSERT_EQ (88.0, squareroot (144.0));
 }

 int main(int argc, char **argv) {
       ::testing::InitGoogleTest(&argc, argv);
       return RUN_ALL_TESTS();
 }
