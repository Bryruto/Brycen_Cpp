#pragma once

class OrderedPair{
    private:
        double xVal{};
        double yVal{};

    public:

        OrderedPair();
        OrderedPair(const double, const double);

        void setXVal(const double);
        void setYVal(const double);

        double getXVal()const;
        double getYVal()const;

        void setPairVal(const double&,const double&);

        double addPair();
        void addPair(const OrderedPair&,const OrderedPair&);

        double subtractPair(); 
        void subtractPair(const OrderedPair&,const OrderedPair&);

        double multiplyPair();
        void multiplyPair(const OrderedPair&,const OrderedPair&);

        double dividePair();
        void dividePair(const OrderedPair&, const OrderedPair&);

        double powerPair();
        void const displayPair();
};