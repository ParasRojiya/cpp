#include<conio.h>
#include<iostream.h>

class A
{
 private:
 int a;

 public:
 void input(int B)
 {
  int b;
  a = B;
  cout<<"Enter B=";
  cin>>B;
  cout<<endl<<"B= "<<B<<endl;
  cout<<"a= "<<a<<endl;
  b=B+a;
  cout<<"b= "<<b;

  }
  };

 void main()
 {
  clrscr();
  A a;
  a.input(2);

  getch();
  }
