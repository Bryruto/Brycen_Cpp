#include <vector>


enum Last{none,Increment,Decrement};
class Counter{
    private:
        int x;
        std::vector<int> past_values;
        std::vector<Last> last;
    public:
        Counter();
        int get_int();

        void set_int(int);

        void increment();
        void decrement();

        int currentCount()const;
        
        void undo();
};