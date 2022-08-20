#include<conio.h>
#include<iostream.h>
#include<string.h>

class parameter
{
 int id;
 char name[20];
 public:

 parameter(int id,char name[])
 {
  this->id=id;
  strcpy(this->name,name);
  }

  void getdata()
  {
   cout<<"\t\tTHIS IS AN EXAMPLE OF PARAMETERIZED CONSTRUCTOR"<<endl;
   cout<<endl<<"ID\tNAME\n";
   cout<<id<<"\t"<<name;
   }
   };

  void main()
  {
   clrscr();
   parameter p(1,"Paras");
   p.getdata();
   getch();
   }