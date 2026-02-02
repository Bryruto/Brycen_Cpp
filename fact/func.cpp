#pragma once

long long fact(long long num){
    long long total{1};
    for(long long i{num};i > 1;i--){
        total *=i;
    }
    return total;

}
long long fact_r(long long num){
    if(num == 1){
        return 1;
    }
    return num * fact_r(num-1);
}   