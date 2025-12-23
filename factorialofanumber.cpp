//program for finding factorial of a number
#include<iostream>
using namespace std;
intFactorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
	fact=fact*i;
	}
	return fact;
}
int main()
{
	int no;
	cout<<"enter the number =";
	cin>>no;
int result=Factorial(no);
if(result==-1)
cout<<"factorial not defined for negative numbers\n";
else
cout<<"factorial"<<result<<endl;
	return 0;	
}