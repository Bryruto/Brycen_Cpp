/*
ask the user for input 
set the user input to a variable 
find the factoral of that variable
    do a for loop with a variable  / or recussion recussion is a function calls it 
    for(long long i = input,long long total = 0 ;variable do till i is 0;update i - 1 ) 
        total = input * (input-1)
output to the screen the total

*/
#include <iostream>
#include "fact.h"

using namespace std;

int main(){
    // ask user for input 
    long long num{};
    cout << "enter whole number: ";
    cin >> num;
    cout << endl;
    cout << "fact" << fact(num) << "recursion" << fact_r(num) << endl;
}
long long fact(long long num){
    long long total{0};
    for(long long i{num};i == 1;i--){
        total += i * (i-1);
    }
    return total;

}
long long fact_r(long long num){
    if(num == 1){
        return 1;
    }
    return num * fact_r(num-1);

}   