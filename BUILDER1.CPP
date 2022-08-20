#include<conio.h>
#include<iostream.h>

class Employee
{
 int id,salary,exp,cntct;
 char  name[20],role[20],address[20],email[20];

 public:

 void setdata()
 {
  cout<<"Enter Employee Id=";
  cin>>id;
  cout<<"Enter Employee Name=";
  cin>>name;
  cout<<"Enter Employee Contact No=";
  cin>>cntct;
  cout<<"Enter Employee Email=";
  cin>>email;
  cout<<"Enter Employee Role=";
  cin>>role;
  cout<<"Enter Employee Experience Years=";
  cin>>exp;
  cout<<"Enter Employee Salary=";
  cin>>salary;
  cout<<"Enter Employee Address=";
  cin>>address;
  }

 void getdata()
 {
  cout<<id<<"\t"<<name<<"\t"<<cntct<<"\t"<<email<<"\t"<<role<<"\t"<<exp<<"\t"<<salary<<"\t"<<address<<endl;
  }

 };


 void main()
 {
  int i,n;
  clrscr();
  Employee e[10];
  cout<<endl<<"Enter How many records You want to insert=";
  cin>>n;

  for(i=0;i<n;i++)
     {
      e[i].setdata();
      }

  cout<<endl<<"id\tname\tContact\tEmail\t\tRole\tExp\tSalary\tAddress\n";

  for(i=0;i<n;i++)
     {
      e[i].getdata();
      }

 getch();
 }