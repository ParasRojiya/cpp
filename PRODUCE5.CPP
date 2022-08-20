#include<conio.h>
#include<iostream.h>

class constr
{
 int def,para,copy;

 public:

 constr()
 {
  cout<<"Enter Value for Default Constructor = ";
  cin>>def;
  }

 constr(int para)
 {
   this->para=para;
   }


 void getdata()
 {
  cout<<" Value = "<<def<<endl<<endl;
  }

 void getpara()
 {
  cout<<"Value of Parameterized Constructor = "<<para<<endl;
  }

 };

 void main()
 {
  clrscr();
  cout<<"\t\tDEFAULT CONSTRUCTOR\n";
  constr cst;
  cst.getdata();
  cout<<"\t\tPARAMETERIZED CONSTRUCTOR\n";
  constr paramt(2);
  paramt.getpara();
  cout<<endl<<"\t\tCOPY CONSTRUCTOR\n";
  constr copi=cst;
  copi.getdata();
  getch();
  }