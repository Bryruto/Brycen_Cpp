/*
Name-> Brycen Anderson
ID-> 111017061
structure-> arrayTools.h -> vectorTools.h -> main.cpp -> arrayTools.cpp , vectorTools.cpp
status-> working as intended
compile-> g++ src/*.cpp -o run
run->./run
*/
#pragma once

#include <vector>
#include <string>
#include <iostream>

//function declarations
void addElements(std::vector<int>& vec,int arr[],int size);

std::vector<int> filterElements(std::vector<int>& vec,int threshold);

void printElements(std::vector<int>& vec, int lineCount);

std::vector<float> scaleElements(std::vector<int>& vec);

std::vector<std::string> splitString(std::string& original, char delim);

