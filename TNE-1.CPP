#include<conio.h>
#include<iostream.h>

class Distance
{
 int feet,inch;
 public:

 void input()
 {
  cout<<"Enter Feet=";
  cin>>feet;
  cout<<"Enter Inch=";
  cin>>inch;

  }

 void output()
 {
  cout<<feet<<"\t"<<inch<<endl;
  }

 void sum(Distance d2)
  {
    int sum,F,I;
    I=d2.inch + inch;
    F=d2.feet + feet  + I/12;
    I = I%12;

    cout<<F<<"\t"<<I;
  }
  };

void main()
{
 clrscr();
 Distance d1,d2;
 d1.input();
 d2.input();
 cout<<"\nFeet\tInch\n";
 d1.output();
 d2.output();
 cout<<"\nSum is\nFeet\tInch\n";
 d1.sum(d2);
 getch();
 }