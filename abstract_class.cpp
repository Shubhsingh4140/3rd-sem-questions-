#include <iostream>
using namespace std;
class CAl_AREA
{
public:
    double r,h;
    void getData(double x,double y)
    {
        r=x;
        h=y;
    }
        virtual void display_Volume()=0;
};
class cone:public CAl_AREA
{
public:
    void display_Volume()
    {
        getData(5,5);
               double v=(1.0/3.0)*3.13*r*r*h;
        cout<<"Volume of cone:"<<v<<endl;
    }
};
class cylinder:public CAl_AREA
{
public:
    void display_Volume()
    {
        getData(5,5);
        double v=3.13*r*r*h;
        cout<<"Volume of cylinder:"<<v<<endl;
    }
};
class hemisphere:public CAl_AREA
{
public:
    void display_Volume()
    {
        getData(5,0);
        double v=(2.0/3.0)*3.13*r*r*r;
        cout<<"Volume of hemisphere:"<<v<<endl;
    }
};
int main()
{
    cone ob1;
    cylinder ob2;
    hemisphere ob3;
    CAl_AREA *ptr1,*ptr2,*ptr3;
    ptr1=&ob1;
    ptr2=&ob2;
    ptr3=&ob3;
    ptr1->display_Volume();
     ptr2->display_Volume();
      ptr3->display_Volume();
      return 0;
}