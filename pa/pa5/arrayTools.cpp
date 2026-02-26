#include "arrayTools.h"

#include <array>
#include <string>
#include <iostream>
#include <random>

void generateArray(std::array<int,MAX_SIZE>& arr,int size,int min,int max){
    try{if(!(MAX_SIZE >= size > 0))throw "Ensure the array size is between 1 and 100 (inclusive).";}

    catch (std::string error){
        std::cout << error << std::endl;
        return;}

    arr.fill(0);
    for(int index{};index<size;index++)
        arr[index] = min + std::rand() % max;
}

void reverseArray(std::array<int,MAX_SIZE>& arr,int size){
    int l{},r = size - 1;int tmp;
    while(l<r){
        tmp = arr[l]; 
        arr[l] = arr[r];
        arr[r] = tmp;
        r--;l++;
    }
}

//todo
void rotateArray(std::array<int,MAX_SIZE>& arr,int size,int steps){}

int findElement(std::array<int,MAX_SIZE>& arr,int size){}

void sortArray(std::array<int,MAX_SIZE>& arr,int size){}