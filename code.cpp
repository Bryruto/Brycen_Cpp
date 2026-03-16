#include <iostream>

float fact(float num){

  if(num == 1)return 1;

  return num * fact(num - 1);

}

int main(){

 float n;

 std::cout << "terms to calculate: ";

 std::cin >> n;

 float e_value = 1.0f;

 

 for(int i{1};i<n;i++){

   float factorial = fact(i);

   e_value += 1.0f/factorial;

   }

std::cout << e_value << std::endl;

}