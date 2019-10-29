#!/bin/bash

g++ -Wall -Werror -std=c++17 -g *.cpp -o lab2

for i in {0..10}
do
    ./lab2 ./testCases/test_case$i.txt > ./doneTests/out$i.txt
    vimdiff ./doneTests/out$i.txt ./testCases/answer$i.txt
done
