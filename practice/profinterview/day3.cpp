#include <cmath>
#include <iostream>
#include <random>
#include <ctime>
#include <chrono>


struct Timer{//object life clock
    std::chrono::time_point<std::chrono::steady_clock> start,end;
    std::chrono::duration<double> duration;

    Timer(){
        start = std::chrono::high_resolution_clock::now();
    }
    ~Timer(){
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;

        std::cout << "time:" << duration.count() << "ms" << std::endl;
    }
};

int try1(long long& n,int count = 0){
    Timer time;
    for(int i{2};i< n;i++){
        bool p = true;
        for(int j{2};j<i;j++){
            if(i%j == 0){
                p = false;
            }
        }
        if(p) count++;
    }
    return count;
}


int try2(long long& n,int count =0){
    Timer time;
    for(int i{2};i<n;i++){
        bool p = true;
        for(int j{2}; j <= std::sqrt(i); j++){
            if(i%j == 0){
                p = false;
            }
        }
        if(p) count++;
    }//<-this is slow endl
    return count;
}

/*
void try3(long long& n){
    Timer time;
    if (n > 0) std::cout << "Primes: ";
    bool p = false;
    for(int i{2};i< n;i++){
        for(int j{2};j <= std::sqrt(i);i++){
            // possible but i need sleep
            }
        }
    }
        */


int main(){
    srand(time(0));
    long long n = (long long)rand();
    std::cout << "number: " << n << std::endl;
   
    int times = try1(n);
    std::cout << times << std::endl;

    int times2 = try2(n);
    std::cout << times2 << std::endl;

    //try3(n);
}



//add to docs
/*
timing

    basic:
        good for benchmarking

            #include chrono <-this library calls a api?
            #include thread
           
           
            auto start = std::chrono::high_resolution_clock::now(); <- this is for starting a timer gives
            std::this_thread::sleep_for(1s); <- to use s you need to use namespace std::literals::chrono_literals
            auto end = std::chrono::high_resolution_clock::now();

            std::chrono::duration<float> duration = end - strart; //give duration as a float 
       

    example 2:
       
        struct timer{
            std::chrono::time_point<std::chrono::steady_clock> start,end;
            std::chrono::duration<float> duration;

            timer(){
                start = std::chrono::high_resolution_clock::now();
            }

            ~timer(){
                end = std::chrono::high_resolution_clock::now();
                duration = end - start;

                float ms = duration.count() * 1000.0f;

                std::cout << "Timer took "<< ms << "ms"<< std::endl;
            }
        };

        void Function(){
        timer T; <- this is all i have to do if i do it this way;
        for(int i{};i< 100;i++)
            std::cout<<"Hello" <<std::endl;
        }
        */
