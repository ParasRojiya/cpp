#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<math.h>

void main()
{
 int arr[20],i,n;
 clrscr();

 cout<<"Enter Value of n=";
 cin>>n;

 for(i=0;i<n;i++)
    {
     cout<<"arr["<<i<<"]=";
     cin>>arr[i];
     }

cout<<"\nNumber\tSquareRoot\n";

for(i=0;i<n;i++)
   {
    cout<<arr[i]<<"\t"<<sqrt(arr[i])<<endl;
    }

 getch();
 }