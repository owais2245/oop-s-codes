#include<iostream>
using namespace std;
int main()
{
int n,i;
 long long fact=1;
cout<<"enter a number";
cin>>n;

if(n<0)
cout<<"factorial of a number  doesnt exists:"
else 
for(i=1;i<=n;i++)
{
fact=fact*i;

cout<<"factorial of a number  exist"<<fact;
}
return 0;
}