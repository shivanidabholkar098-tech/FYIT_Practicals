#include<iostream>
using namespace std;
class person(
public:
string name;
int age;
int phone;
void getdata() {
cout<<"Enter name: ";
cin>>name;
cout<<"Enter age: ";
cin>>age;
cout<<"Enter phone no. :";
cin>>phone;
}
class student: public person(
public:
int rollno;
int marks;
void display() {
cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;
cout<<"Phone no. : "<<phone<<endl;
cout<<"Roll no. : "<<rollno<<endl;
cout<<"Marks:"<<marks;
};
int main() {
student s;
s.getdata();
cout<<"Enter your roll no: ";
cin>>s.rollno:
cout<<"Enter you marks: ";
cin>>s.marks;
s.display();
return 0;
}
