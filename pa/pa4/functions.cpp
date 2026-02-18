#include "functions.h"
#include <iostream>
#include <random>
#include <ctime>
#define RAND_MAX 50

int getInput(std::array<float, MAX_SIZE>& my_arr){
    int i{};
    int index{0};
    do {
        std::cin >> i;
        my_arr[index]= i;
        index++;
    } while(i != -1 && index < MAX_SIZE);
    return static_cast<int>(my_arr.size());
}

void randInput(std::array<float, MAX_SIZE>& my_arr, int& seed){
    std::srand(std::time(NULL));
    int value{};
    do{
        
    }while(value < MAX_SIZE);
}

float average(std::array<float, MAX_SIZE>& my_arr, int& ){}

void maxAndMin(std::array<float, MAX_SIZE>& my_arr, int&, float& max, float& min){}

float standardDev(std::array<float, MAX_SIZE>& my_arr, int&){}

void display(std::array<float, MAX_SIZE>& my_arr, int&){}