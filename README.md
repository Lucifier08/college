# college
For practice.
#include<iostream>
using namespace std;
#define pie 3.14
void area(int a)
{
int area;
area=a*a;
cout<<"Area of square = "<<area;
}

void area(int a,int b)
{
int area;
area=a*b;
cout<<"AREA OF RECTANGLE IS ="<<area;
}

void area(int c)
{
int area;
area=pie*c*c;
cout<<"AREA OF CIRCLE:"<<area;
}


 
int main()
{
int l,b,s,r;

cout<<"ENTER THE SIDE OF SQUARE";
cin>>s;
area(s);

cout<<"ENTER THE LENGTH AND BREADTH OF RECTANGLE";
cin>>l>>b;
area(l,b);

cout<<"ENTER THE RADIUS OF CIRCLE";
cin>>r;
area(r);
}



