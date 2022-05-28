#include<iostream>
using namespace std;
int main()
{
int x,sum=0,rem;
cout<<"Enter the number";
cin>>x;
while(x!=0)
{
rem=x%10;
sum=sum+rem;
x=x/10;
}
cout<<"Sum is:"<<sum;
}
