/*
Name-> Brycen Anderson
ID-> 111017061
structure-> OrderedPair.h
            functions.h
            main.cpp
            OrderedPair.cpp
            functions.cpp
status-> working as intended
compile-> g++ src/*.cpp -o run
run->./run
*/
#pragma once
#include <array>
#define MAX_SIZE 50

int getInput(std::array<float, MAX_SIZE>& );

void randInput(std::array<float, MAX_SIZE>&, int&);

float average(std::array<float, MAX_SIZE>&, int&);

void maxAndMin(std::array<float, MAX_SIZE>&, int&, float& max, float& min);

float standardDev(std::array<float, MAX_SIZE>&, int&);

void display(std::array<float, MAX_SIZE>&, int&);