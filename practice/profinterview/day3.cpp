#include <cmath>
#include <iostream> 
#include <random>
#include <ctime>
#include <chrono>


void try1(long long n){
    if (n > 0) std::cout << "Primes: ";
    for(int i{2};i< n;i++){
        for(int j{2};j<i;j++){
            if(i%j!=0) std::cout << i <<" ";
        }
    }
}

void try2(long long& n){
    if (n > 0) std::cout << "Primes: ";
    for(int i{2};i<n;i++){
        for(int j = i+1; j < std::sqrt(i); j++){
            if(i%j != 0) std::cout << i << " ";
        }
    }
}

void try3(long long& n){
    if (n > 0) std::cout << "Primes: ";
    for(int i{};i< n;i++){
        for(int j = i+1;j < std::sqrt(i);i++){
            
        }
    }
}

int main(){
    srand(time(0));
    long long n = (long long)rand();


    auto start = std::chrono::high_resolution_clock::now();
    try1(n);
    auto stop =std::chrono::high_resolution_clock::now();
    std::chrono::duration<double,std::micro> result = start-stop;
    std::cout << result.count() << std::endl;


    start = std::chrono::high_resolution_clock::now();
    try1(n);
    auto stop =std::chrono::high_resolution_clock::now();
    result = start-stop;
    std::cout << result.count() <<std::endl;


    start = std::chrono::high_resolution_clock::now();
    try1(n);
    stop =std::chrono::high_resolution_clock::now();
    result = start-stop;
    std::cout << result.count() << std::endl;
}
