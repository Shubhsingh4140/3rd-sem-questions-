#include <iostream>
using namespace std;
class shape
{
    public:
    double a,b;
    void getData(double x,double y)
    {
        a=x;
        b=y;
    }
    virtual void displayArea()
    {
        cout<<"area"<<endl;
    }
};
class triangle:public shape
{
     public:
    void displayArea()
    {
        getData(10,10);
        double area=a*b/2;
        cout<<"Area of Triangle:"<<area<<endl;
    }
};
class rectangle:public shape
{
     public:
    void displayArea()
    {
         getData(10,10);
        double area=a*b;
        cout<<"Area of Rectangle:"<<area<<endl;
    }
};
int main()
{
    triangle ob;
    rectangle ab;
    shape *ptr1,*ptr2;
    ptr1=&ob;
    ptr2=&ab;
    ptr1->displayArea();
    ptr2->displayArea();
    return 0;
    }