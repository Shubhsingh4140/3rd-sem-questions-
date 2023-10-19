#include<iostream>
#include<string>
using namespace std;
class A
{
public:
    void display_A()
    {
        cout<<"hello"<<endl;
    }
};
class B:public virtual A
{
public:
    void display_B()
    {
        cout<<"hi there"<<endl;
    }
};
class C:public virtual A
{
    void display_B()
    {
        cout<<"hey there"<<endl;
    }
};
class D:public B,public C
{
public:
    void display()
    {
        display_A();
    }
};
int main()
{
    D ob;
    ob.display();
    return 0;
}
