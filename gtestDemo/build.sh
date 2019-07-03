#!/bin/bash

rm -rf ./test

echo "#######test clean !"

g++ -pthread  ./test.cpp /usr/local/lib/libgtest.a -o test  -std=c++11

echo "####################"
echo ""
echo ""
echo "####################"


./test

