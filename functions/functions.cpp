#include <iostream>

//syntax for function 
// returnType name(type variable) 

int Multiply(int a, int b)
{
    return a * b;
}

// this function has no return because its void 
void MuliplyAndLog(int a,int b)
{
    int result = Multiply(a,b); 
    std::cout << result << std::endl;
}

// only main can have a return type that does not have a return in it 
int main()
{
    // this is how you can in c++ 
    int result = Multiply(3,2);
    std::cout << result << std::endl;

    int result2 = Multiply(8,5); 
    std::cout << result2 << std::endl;

    int result3 = Multiply(90,45);
    std::cout << result3 << std::endl;

    std::cin.get();

    //you can do this fast with a better function 

    MuliplyAndLog(3,2);
    MuliplyAndLog(8,5);
    MuliplyAndLog(90,45);

    std::cin.get();

}

// only make function when your doing something more than once

// evertime you call a function the compiler makes a call instuction this means we have create the 
// frame for the function so we push return address function arguments on stack
// that then will make the compiler jump to a different part of the binary and then will need to return 
// this takes up time and space so only add if you need to 


// the main reason for functions is to prevent code duplication