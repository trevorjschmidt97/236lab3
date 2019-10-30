#!/bin/bash

g++ -Wall -Werror -std=c++17 -g *.cpp -o lab3

for i in {0}
do
    ./lab3 ./testFiles/testFile.txt > ./doneTests/out$i.txt
    vimdiff ./doneTests/out$i.txt ./testCases/answer$i.txt
done
