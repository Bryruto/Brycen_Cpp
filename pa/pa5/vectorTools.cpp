/*
Name-> Brycen Anderson
ID-> 111017061
structure-> arrayTools.h -> vectorTools.h -> main.cpp -> arrayTools.cpp , vectorTools.cpp
status-> working as intended
compile-> g++ src/*.cpp -o run
run->./run
*/
#include "vectorTools.h"
#include <vector>
//add new element to an array looping and then add each one at a time
void addElements(std::vector<int>& vec,int arr[],int size){
    if(size < 1)throw "Array must have values";
    for(int index{};index<size;index++)
        vec.push_back(arr[index]);
}

//loop through array and add each value to a new array if value is less than threshold
std::vector<int> filterElements(std::vector<int>& vec,int threshold){
    if(vec.empty()) throw "Empty Vector Found. Use populated one";
    std::vector<int> result;
    for(auto index:vec)
        if(index  <= threshold) result.push_back(index);
    return result;
}

//loop and output values in array if the index to the value is divided evenly into 0 get a new line
void printElements(std::vector<int>& vec, int lineCount){
    if(vec.empty()) throw "Empty Vector Found. Use populated one";
    bool fix;
    for(int index{};vec.size()> index;index++){
        fix = true; // double new line fix
        std::cout<< vec[index];
        if((index+1)%lineCount== 0){
            std::cout << std::endl;
            fix = false;
        }
        else std::cout << ' ';
    }
    if(fix)std::cout << std::endl;
}

//with 2 int values min and max set to 1st element loop and update max if value is greater than max
// and min if value is less than min
std::vector<float> scaleElements(std::vector<int>& vec){
    if(vec.empty()) throw "Empty Vector Found. Use populated one";
    int min = vec[0];
    int max = vec[0];
    std::vector<float> result;
    for(int value:vec){
        if(max < value) max = value;
        if(min > value)min = value;
    }
    if(max == min) return std::vector<float>(vec.size(),0.0f);
    for(int value:vec){
        float tmp = static_cast<float>(value - min)/(max - min);
        result.push_back(tmp);
    }
    return result;
}

//loop through the string if the char value is delim add all chars before to array
std::vector<std::string> splitString(std::string& original, char delim){
    std::string holder{};
    std::vector<std::string> result;
    for(char charr:original){
        if (charr == delim){
            result.push_back(holder);
            holder = "";
            continue;
        }
        holder += charr;
    }
    result.push_back(holder); //ok now i got it
    return result;
}


