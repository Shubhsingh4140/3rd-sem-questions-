#include<iostream>
#include<cstring>
using namespace std;
class student
{
    int id,age;
    string dept,name;
    int marks[5];
    public:
        void getData()
            {
            int i;
            cout<<"enter your name\n";
            getline(cin,name);
            cout<<"enter department name\n";
            getline(cin,dept);
            cout<<"enter age \n";
            cin>>age;
            cout<<"enter id\n";
            cin>>id;
            cout<<"enter marks in 5 subjects\n";
            for(i=0;i<5;i++)
                {
                cin>>marks[i];
                }
            }
        void calGrade()
        {
            int i,s=0;
            float per;
            for(i=0;i<5;i++)
                {
                s+=marks[i];
                }
            per=s/5;
            if(per>=90)
                cout<<"A";
            else if(per>=80&&per<90)
                cout<<"B";
            else if(per>=70&&per<80)
                cout<<"C";
            else if(per>=60&&per<70)
                cout<<"D";
            else
                cout<<"F";
            }
        void printData()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Department:"<<dept<<endl;
            cout<<"Age:"<<age<<endl;
            cout<<"Id:"<<id<<endl;
            calGrade();
            }
};
    int main()
    {
        student ob;
        ob.getData();
        ob.printData();
        }

