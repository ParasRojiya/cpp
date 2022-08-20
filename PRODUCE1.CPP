#include<conio.h>
#include<iostream.h>

class def_const
{
 int a;
 public:

 def_const()
 {
  cout<<"\t\tTHIS IS AN EXAMPLE OF DEFAULT CONSTRUCTOR\n";
  cout<<"a=";
  cin>>a;

  }

 void getdata()
 {
  cout<<endl<<"a = "<<a;
  }

 };

 void main()
 {
  clrscr();
  def_const d;
  d.getdata();
  getch();
  }