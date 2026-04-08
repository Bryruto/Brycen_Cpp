#include <iostream>  

int main(){
  int arr[] = {1,2,3,4,5,7,8,99,100,-101};

  int best{1};
  int tmp{1};
  for(size_t i{};i < 9;i++){
    if(arr[i]+1 != arr[i+1]){
      best = (best < tmp)? tmp: best;
      tmp = 0;
    }
    tmp ++;
  }

  std::cout << best << std::endl;
}
