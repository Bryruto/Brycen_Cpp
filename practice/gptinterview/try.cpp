/*
Tamsk
Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

Mind the input validation.

Example
{ 6, 2, 1, 8, 10 } => 16
{ 1, 1, 11, 2, 3 } => 6
*/

#include<vector>
#include <cassert>
using namespace std;

int main(){
    Assert::That(sum({ 6, 2, 1, 8, 10 }), Equals(16));
    Assert::That(sum({ 1, 1, 11, 2, 3 }), Equals(6));
}

int sum(vector<int> numbers)
{
    int max{},total{};
    int min = numbers[0];
     for(int& i:numbers){
        max = (i > max)? i: max;
        min = (i < min)? i: min;
    
        total+=i;
    }

    return total- max - min;m
}
