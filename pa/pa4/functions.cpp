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
#include "functions.h"
#include <iostream>
#include <random>
#include <ctime>
#include <cmath>

// ask for user input to add elements to an array with a max size of 50
int getInput(std::array<float, MAX_SIZE>& my_arr){
    my_arr.fill(0);
    float i{0};
    int index{0};
    while(i != -1 && index < MAX_SIZE){
        std::cin >> i;
        if (i==-1) break;
        my_arr[index]= i;
        index++;
    }
    return index;
}

//add random numbers to array
void randInput(std::array<float, MAX_SIZE>& my_arr, int& length){//todo
    my_arr.fill(0);
    if (length < 1 || length > 50) {
        length = 0;
        return;
    }
    std::srand(time(0));
    for(int index{};index<length;index++){
        my_arr[index] = 1 + rand() % 100;
    }
}

//gives average of numbers in array
float average(std::array<float, MAX_SIZE>& my_arr, int& length){
    float sum{};
    for(int index{};index<length;index++)
        sum+=my_arr[index];
    return sum/length;
}

//finds the min and max in an array
void maxAndMin(std::array<float, MAX_SIZE>& my_arr, int& length, float& max, float& min){
    min = my_arr[0];
    max =my_arr[0];
    for(int index{};index<length;index++){
        if(min > my_arr[index]) min = my_arr[index];
        if(max < my_arr[index]) max = my_arr[index];
    }
}

//standard deviation of array
float standardDev(std::array<float, MAX_SIZE>& my_arr, int& length){
    if (length < 2)return 0.0f;
    float avg = average(my_arr,length);
    float sum{};
    for(int index{};index < length; index++){
        sum += (my_arr[index]-avg)*(my_arr[index]-avg);
    }
    return std::sqrt(sum/(length-1));
}



//dispaly information of array values in all forms
void display(std::array<float, MAX_SIZE>& my_arr, int& length)
{
    std::cout << length << " values were entered"<< std::endl;
    std::cout << "The values are : " << std::endl;

    for (int index{}; index < length; index++) { //did 4 but test want 5 idk 
        std::cout << my_arr[index] << " ";
        if ((index + 1) % 5 == 0) std::cout << std::endl;
    }

    std::cout << std::endl;

    std::cout << "The average of the " << length << " numbers is : "
              << average(my_arr, length) << std::endl;

    float max, min;
    maxAndMin(my_arr, length, max, min);

    std::cout << "The minimum number is : " << min << std::endl;
    std::cout << "The maximum number is : " << max << std::endl;
    std::cout << "The standard deviation is : " << standardDev(my_arr, length) << std::endl;
}