/*
Name-> Brycen Anderson
ID-> 111017061
structure-> arrayTools.h -> vectorTools.h -> main.cpp -> arrayTools.cpp , vectorTools.cpp
status-> working as intended
compile-> g++ src/*.cpp -o run
run->./run
*/

#include "arrayTools.h"
#include <array>
#include <string>
#include <iostream>
#include <random>

//loop and make an array of random values with range
void generateArray(std::array<int,MAX_SIZE>& arr,int size,int min,int max){
    if(!(MAX_SIZE >=size && size > 0))throw "Ensure the array size is between 1 and 100 (inclusive).";

    arr.fill(0);
    for(int index{};index<size;index++)
        arr[index] = min + std::rand() % (max - min + 1);
}

//iterate on both sides and flip the value locations till at the middle
void reverseArray(std::array<int,MAX_SIZE>& arr,int size){
    int left{};
    int right = size - 1;
    int tmp;
    while(left<right){
        tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        right--;left++;
    }
}

//my fav move the value in array steps times to the next location
//i did this by index + steps = this is the new location with no bound so i just add a bound
void rotateArray(std::array<int,MAX_SIZE>& arr,int size,int steps){
    std::array<int,MAX_SIZE> result;
    for(int index{};index<size;index++){
        result[index] = arr[(index+steps)%size];
    }
    arr = result;
}

//loop and check if element is equivalent to value return index when it is or error if not
int findElement(std::array<int,MAX_SIZE>& arr,int size,int value){
        for(int index{};index<size;index++)
            if(arr[index] == value) return index;
        throw "The value could not be found";
}

//2 loops 1st is on a condition 2nd will check if that condition is true or not
//2nd loop will swap values in descending order
void sortArray(std::array<int,MAX_SIZE>& arr,int size){
    if (size==0) return;
    bool flipped;
    do{
        flipped = false;
        for(int index{},tmp;index<size-1;index++)
            if(arr[index] < arr[index + 1]){
                tmp = arr[index];
                arr[index] = arr[index+1];
                arr[index + 1] = tmp;
                flipped = true;
            }
    }while(flipped);
}
