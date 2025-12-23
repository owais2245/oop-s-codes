#include<iostream>
using namespace std;
int main()
{
int num,rev,rem;
cout<<"enter a number";
cin>>num;
rev =0;
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
cout<<"reversed number is"<<rev;
return 0;
}