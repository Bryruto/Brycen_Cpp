/*
Name-> Brycen Anderson
ID-> 111017061
structure-> arrayTools.h -> vectorTools.h -> main.cpp -> arrayTools.cpp , vectorTools.cpp
status-> working as intended
compile-> g++ src/*.cpp -o run
run->./run
*/
#pragma once
//macro to set MAX_SIZE
#define MAX_SIZE 100
#include <array>

//function declarations
void generateArray(std::array<int,MAX_SIZE>& arr,int size,int min,int max);

void reverseArray(std::array<int, MAX_SIZE>& arr,int size);

void rotateArray(std::array<int,MAX_SIZE>& arr,int size,int steps);

int findElement(std::array<int,MAX_SIZE>& arr,int size,int value);

void sortArray(std::array<int,MAX_SIZE>& arr,int size);
