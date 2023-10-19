#include<iostream>
#include<string>
using namespace std;
class Student
{
    string name;
    int age,enroll_no,marks;
public:
    void input()
    {
        cout<<"enter student name"<<endl;
        getline(cin,name);
        cout<<"enter age"<<endl;
        cin>>age;
        cout<<"enter enrollment number"<<endl;
        cin>>enroll_no;
        cout<<"enter marks"<<endl;
        cin>>marks;
        cin.ignore();
    }
    void display()
    {
    cout<<"student name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
     cout<<"enrollment number:"<<enroll_no<<endl;
      cout<<"marks:"<<marks<<endl;
    }
};
class Faculty
{
    string name,dept,gender;
    int sal,age,exp,code;
public:
        void input()
        {
            cout<<"enter employee name"<<endl;
            getline(cin,name);
            cout<<"enter department"<<endl;
            getline(cin,dept);
            cout<<"enter gender"<<endl;
            getline(cin,gender);
            cout<<"enter salary"<<endl;
            cin>>sal;
            cout<<"enter age"<<endl;
            cin>>age;
            cout<<"enter experience"<<endl;
            cin>>exp;
            cout<<"enter code"<<endl;
            cin>>code;

        }
        void display()
        {

            cout<<"employee name:"<<name<<endl;
            cout<<"department:"<<dept<<endl;
            cout<<"gender:"<<gender<<endl;
            cout<<"salary:"<<sal<<endl;
            cout<<"age:"<<age<<endl;
            cout<<"experience:"<<exp<<endl;
            cout<<"code:"<<code;

        }

};
class Person:public Student,public Faculty
{
public:
    void setinfo()
    {
        Student::input();
        Faculty::input();
    }
    void getinfo()
    {
        Student::display();
        Faculty::display();
    }
};
int main()
{
    Person ob;
    ob.setinfo();
    ob.getinfo();
    return 0;
}
