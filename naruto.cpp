#include<iostream>
using namespace std;
void arm(int a)
{
int rem,sum=0;
int c=a;
while(a>0)
{
rem=a%10;
a=a/10;
sum=sum+(rem*rem*rem);
}
if(c==sum)
{
cout<<c<<"number is armstrong\n";
}
else
{
cout<<c<<" number is not armstrong";
}
}
int main()
{
int n;
cout<<"Enter the number";
cin>>n;
arm(n);
return 0;

}
