#include <iostream>  


int main(){
    int arr[] = {1,1,1,3,4,3,1,2,3,4,5,7,8,99,100,-101};//c sytle array with elements

    int best{1};
    size_t size = (sizeof(arr)/sizeof(arr[0]))-1;
  
    for(size_t i{},tmp{1};i < size;i++){
        tmp = (arr[i] + 1 == arr[i+1])? tmp + 1 : 1;
        best = (best < tmp)? tmp: best;
    }
    std::cout << best << std::endl;
}
