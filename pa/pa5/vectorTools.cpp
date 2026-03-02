#include "vectorTools.h"
#include <vector> 

void addElements(std::vector<int>& vec,int arr[],int size){
    if(size > 1)throw "Array must have values";
    for(int index{};index<size;index++)
        vec.push_back(arr[index]); 
}
std::vector<int> filterElements(std::vector<int>& vec,int threshold){
    if(vec.empty()) throw "Empty Vector Found. Use populated one";
    std::vector<int> result;
    for(auto index:vec)
        if(index  <= threshold) result.push_back(index);
    return result;
}

void printElements(std::vector<int>& vec, int lineCount){
    if(vec.empty()) throw "Empty Vector Found. Use populated one";
    for(int index{};vec.size()> index;index++){
        if((index+1)%lineCount== 0) std::cout << std::endl; 
        std::cout<< vec[index] + " " <<std::endl; 
    }
}

std::vector<float> scaleElements(std::vector<int>& vec){
    if(vec.empty()) throw "Empty Vector Found. Use populated one";
    int min = vec[0];
    int max = vec[0];
    std::vector<float> result;
    for(int value:vec){
        if(max < value) max = value;
        if(min > value)min = value;
    }
    for(int value:vec){
        float tmp = static_cast<float>((value - min)/(max - min)); 
        result.push_back(tmp);
    }
    return result;
}

std::vector<std::string> splitString(std::string& original, char delim){
    std::string holder{};
    std::vector<std::string> result;
    for(char charr:original){
        if (charr == delim){ 
            result.push_back(holder);
            holder = "";
        }
        holder += charr;
    } 
}


