#pragma once

#include <vector>
#include <string>


void addElements(std::vector<int>& vec,int arr[],int size);

std::vector<int> filterElements(std::vector<int>& vec,int threshold);

void printElements(std::vector<int>& vec, int lineCount);  

std::vector<float> scaleElements(std::vector<int>& vec);

std::vector<std::string> splitString(std::string& original, char delim);

