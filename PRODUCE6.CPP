#include<conio.h>
#include<iostream.h>

class A
{
 int id;

 public:

 A()
 {
  cout<<"Enter value of id = ";
  cin>>id;
  }

 void copy(A &a)
 {
   id=a.id;
   }

 void getdata()
 {
  cout<<"ID = "<<id<<endl;
  }

 };

 void main()
 {
  clrscr();
  A a,a1;
  a.getdata();
  a1.copy(a);
  a1.getdata();
  getch();
  }