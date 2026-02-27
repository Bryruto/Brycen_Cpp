#pragma once

#define MAX_SIZE 100
#include <array>

void generateArray(std::array<int,MAX_SIZE>& arr,int size,int min,int max);

void reverseArray(std::array<int, MAX_SIZE>& arr,int size,int steps);

void rotateArray(std::array<int,MAX_SIZE>& arr,int size);

int findElement(std::array<int,MAX_SIZE>& arr,int size,int value);

void sortArray(std::array<int,MAX_SIZE>& arr,int size);

