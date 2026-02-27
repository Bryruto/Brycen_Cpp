#include "arrayTools.h"

#include <array>
#include <string>
#include <iostream>
#include <random>

void generateArray(std::array<int,MAX_SIZE>& arr,int size,int min,int max){
    //try{
        if(!(MAX_SIZE >= size > 0))throw "Ensure the array size is between 1 and 100 (inclusive).";
    //}

    /*
    catch (std::string error){
        std::cout << error << std::endl;
        return;}
    */
    arr.fill(0);
    for(int index{};index<size;index++)
        arr[index] = min + std::rand() % max;
}

void reverseArray(std::array<int,MAX_SIZE>& arr,int size){
    int left{},right = size - 1;int tmp;
    while(left<right){
        tmp = arr[left]; 
        arr[left] = arr[right];
        arr[right] = tmp;
        right--;left++;
    }
}


void rotateArray(std::array<int,MAX_SIZE>& arr,int size,int steps){
    std::array<int,MAX_SIZE> result;
    for(int index{};index<size;index++){
        result[index] = arr[index+steps%size];
    }
    arr = result;
}

int findElement(std::array<int,MAX_SIZE>& arr,int size,int value){
    //try{
        for(int index{};index<size;index++)
            if(arr[index] == value) return index;
        throw "The value could not be found ";
    //}

/*
    catch(std::string error){
        std::cout << error << std::endl;
    }
*/
}

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

