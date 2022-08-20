#include<conio.h>
#include<iostream.h>

class Time
{
 int h,m;
 public:

 void input()
 {
  cout<<"Enter Hour(s)=";
  cin>>h;
  cout<<"Enter Minute(s)=";
  cin>>m;
  }

 void calc(Time t2)
 {
  int H,M;
  M=t2.m + m;
  H=t2.h + h + M/60;
  M=M%60;
  H=H%60;
 cout<<H<<"\t"<<M<<endl;

 }
 };

 void main()
 {
  clrscr();
  Time t1,t2;
  t1.input();
  t2.input();
  cout<<endl<<"Hours\tMinutes\n";
  t1.calc(t2);
  getch();
  }