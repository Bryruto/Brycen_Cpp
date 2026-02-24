/*
Name-> Brycen Anderson
ID-> 111017061
structure-> OrderedPair.h
            functions.h
            main.cpp
            OrderedPair.cpp
            functions.cpp
status-> working as intended
compile-> g++ src/*.cpp -o run
run->./run
*/
#pragma once

class OrderedPair{
    //member variables
    private:
        double xVal{};
        double yVal{};

    public:
    //constructors
        OrderedPair();
        OrderedPair(const double, const double);
    //setters
        void setXVal(const double);
        void setYVal(const double);
        void setPairVal(const double&,const double&);

    //getters
        double getXVal()const;
        double getYVal()const;


    //class methods
        double addPair();
        void addPair(const OrderedPair&,const OrderedPair&);

        double subtractPair();
        void subtractPair(const OrderedPair&,const OrderedPair&);

        double multiplyPair();
        void multiplyPair(const OrderedPair&,const OrderedPair&);

        double dividePair();
        void dividePair(const OrderedPair&, const OrderedPair&);

        double powerPair();
        void displayPair()const;
};