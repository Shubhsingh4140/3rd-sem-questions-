#include<iostream>
using namespace std;
class Student
{
    private:
        string name;
        int age;
        int roll_no;
        void getInfo()
        {
            cout<<"enter you name\n";
            getline(cin,name);
            cout<<"enter your age\n";
            cin>>age;
            cout<<"enter roll no\n";
            cin>>roll_no;
            cout<<"enter marks in 5 subjects";
            cin>>m1>>m2>>m3>>m4>>m5;
        }
    protected:
        int m1,m2,m3,m4,m5;
        void showInfo()
        {
            getInfo();
            cout<<"Name :"<<name;
            cout<<"ROLL no :"<<roll_no;
            cout<<"Age:"<<age;
        }
};
class Faculty:protected Student
{
    public:
        void calAvg()
        {
            showInfo();
            float avg=(m1+m2+m3+m4+m5)/5;
            cout<<"Average :"<<avg;
        }
};
int main()
{
    int i=0;
    Faculty ob[5];
    for(i=0;i<5;i++)
    {
    ob[i].calAvg();
    }
}