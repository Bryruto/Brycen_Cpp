#include "box.h"


Counter::Counter():x(0),past_values({}),last(none){}

int Counter::get_int(){return x;}

void Counter::set_int(int value){x = value;}

void Counter::increment(){
    x++;
    past_values.push_back(x);
    last.push_back(Increment);
}

void Counter::decrement(){
    x--;
    past_values.push_back(x);
    last.push_back(Decrement);
}

int Counter::currentCount()const{return x;}

void Counter::undo(){
    if(past_values.empty() || last.empty()) return;

    Last curr = last.back();
    last.pop_back();
    switch (curr){
        case Increment:x--;past_values.pop_back();break;
        case Decrement:x++;past_values.pop_back();break;
        default:break;
    }
    return;
}