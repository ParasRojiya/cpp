#include<conio.h>
#include<iostream.h>
#include<string.h>

void main()
{

 char ch;
 clrscr();

 cout<<"Enter Your Character=";
 cin>>ch;



     if(ch=='a' || ch=='e'  || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' ||  ch=='O' || ch=='U' )
       {
	 cout<<endl<<"Your Character Is Vowel";
	 }
     else
       {
	cout<<endl<<"Your Character Is Consonent";
	}

    getch();
    }