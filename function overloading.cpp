#include<iostream.h>
#include<conio.h>
#include<math.h>
int power(int a,int b);
double power(int i, double d);
int main()
{
int i1,i2,i3;
double d1;
clrscr();

cout<<"\nEnter Two Integer Numbers To Calculate Power : ";
cin >>i1>>i2;
int p1=power(i1,i2);
cout<<"\nThe Power of "<<i1<<" and "<<i2<<" is : "<<p1;
cout<<"\n\nEnter One Integer And One Double To calculate power :";
cin>>i3>>d1;
double p2=power(i3,d1);
cout<<"\nThe Power of "<<i3<<" and "<<d1<<" is : "<<p2;
getch();
return(0);
}
int power(int a,int b)
{
return(pow(a,b));
}
double power(int i, double d)
{
return(pow(i,d));
}

