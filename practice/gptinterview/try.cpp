//rule of five - if you need any of the 5 you should do all 5 - destructor, copy constructor, copy assignment operator, move constructor, or move assignment operator.

//override 

class Rectangle{
    private:
        int width;
        int height;
    public:
        Rectangle(int w,int h):width(w),height(h){}
        int get_width()const{return width;}
        int get_height()const{return height;}
        void set_width(int Width){width = Width;}
        void set_height(int Height){height = Height;}

        int area(){return height*width;}
};

class ColoredRectangle :public Rectangle{
    private:
        char* color;
    public:
        ColoredRectangle(int w, int h, char* c):Rectangle(w,h),color(c){}
}; 

