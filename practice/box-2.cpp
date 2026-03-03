#include <vector>
#include <string>

class Car{
    std::string lplate;
    int position;
    int speed;

    public:
        Car(){}
        Car(std::string l,int p,int s):lplate(l),position(p),speed(s){}

        void set_lp(std::string lp){lplate = lp;}
        void set_pos(int pos){position = pos;}
        void set_speed(int sp){speed = sp;}

        std::string get_lp()const{return lplate;}
        int get_pos()const {return position;}
        int get_speed()const {return speed;}

        friend bool operator <(const Car& a, const Car& b){
            return (a.speed<b.speed);
        }

};
/*
int main(){
    Car arr[]= {Car("value",0,58),Car("some",1,29), Car("value",2,58),Car("some",3,29),Car("value",4,58),Car("some",5,29)};
    int size = sizeof(arr)/sizeof(arr[0]);

    bool flip;
    do{
        flip = false;
        for (int i{0};i < size-1;i++){
            if (arr[i] < arr[i+1]){
                Car tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                arr[i].set_pos(i);
                arr[i+1].set_pos(i+1);
                flip = true;
            }
        }
    }while(flip);
}
*/

int main(){
    Car* arr[]= {new Car("value",0,58),new Car("some",1,29),new Car("value",2,58),new Car("some",3,29),new Car("value",4,58),new Car("some",5,29)};
    int size = sizeof(arr)/sizeof(arr[0]);

    bool flip;
    do{
        flip = false;
        for (int i{0};i < size-1;i++){
            if (arr[i] < arr[i+1]){
                *arr[i] ^= *arr[i+1];
            }
        }
    }while(flip);
}