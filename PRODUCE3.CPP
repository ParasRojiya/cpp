#include<conio.h>
#include<iostream.h>
#include<string.h>

class construct
{
 int a;
 public:

 construct()
 {
  cout<<"a=";
  cin>>a;
  }

 void getdata()
 {
  cout<<"\na = "<<a;
  }

 copy(construct &C)
 {
  a=C.a;
  }
 };

 void main()
 {
  clrscr();
  cout<<"\n\t\tIMPLICIT COPY CONSTRUCTOR\n";
  construct c;
  c.getdata();
  construct c1=c;
  c1.getdata();
  cout<<"\n\t\tEXPLICIT CONSTRUCTOR\n";
  construct C,C1;
  C.getdata();
  C1.copy(C);
  C1.getdata();
  getch();
  }
