#include<iostream>
#include<string>
using namespace std;
class A
{
public:
    int multiplyby2(int x,int i)
    {
        x=2*x;
        cout<<"A's function called "<<i<<" times"<<endl;
        return x;
    }
};
class B
{
public:
    int multiplyby3(int x,int i)
    {
        x=3*x;
        cout<<"B's function called "<<i<<" times"<<endl;
        return x;
    }
};
class C
{
public:
    int multiplyby5(int x,int i)
    {
        x=5*x;
        cout<<"C's function called "<<i<<" times"<<endl;
        return x;
    }
};
class D:public A,public B,public C
{
    int val;
    int i=0;
    int j=0;
    int k=0;
public:
    D(int x)
    {
        val=x;
    }
    void update_val()
    {
        val=multiplyby2(val,++i);
        val=multiplyby3(val,++j);
        val=multiplyby5(val,++k);
    }
    void display()
    {
        cout<<"VALUE ="<<val<<endl;
    }
} ;
int main()
{
    D ob(1);
    ob.update_val();
    ob.update_val();
    ob.display();
    return 0;
}
