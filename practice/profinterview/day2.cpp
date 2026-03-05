#include <string>
#include <iostream>

//this is the car class has holds license plates, position in lane , seep of the car. you can set and get any of these and also use the < to compare
class Car{
    std::string lplate;
    int position;
    int speed;

    public:
        Car(){}
        Car(std::string l,int p,int s):lplate(l),position(p),speed(s){}

        ~Car(){}

        void set_lp(std::string lp){lplate = lp;}
        void set_pos(int pos){position = pos;}
        void set_speed(int sp){speed = sp;}

        std::string get_lp()const{return lplate;}
        int get_pos()const {return position;}
        int get_speed()const {return speed;}

        friend bool operator <(const Car& a, const Car& b){return (a.speed<b.speed);}

};


int main(){ 
    Car* arr[]= {new Car("adljo2",0,4),new Car("adljo2",1,30),new Car("adljo2",2,60)};

    int size = sizeof(arr)/sizeof(arr[0]);

    bool flip;
    do{
        flip = false;
        for (int i{0};i < size-1;i++){
            if (arr[i]->get_speed()<arr[i+1]->get_speed()){
                Car* tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                (*arr[i]).set_pos(i);
                arr[i+1]->set_pos(i+1);
                flip = true;
            }
        }
    }while(flip);

    for(int i{};i< size;i++)
        std::cout << arr[i]->get_speed()<< std::endl;

    delete[] arr;
}