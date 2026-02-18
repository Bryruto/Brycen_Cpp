#pragma once 
#include <string>
#include <array>
#include <ctime>
#define MAX_SIZE 50

int getInput(std::array<float, MAX_SIZE>& );

void randInput(std::array<float, MAX_SIZE>&, int&);

float average(std::array<float, MAX_SIZE>&, int&);

void maxAndMin(std::array<float, MAX_SIZE>&, int&, float& max, float& min);

float standardDev(std::array<float, MAX_SIZE>&, int&);

void display(std::array<float, MAX_SIZE>&, int&);