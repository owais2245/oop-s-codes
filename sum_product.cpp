#include<iostream>
using namespace std;
int main()
{
	int num,digit;
int sum=0,pro=1;
cout<<"enter an integer";
cin>>num;	
	
	int temp=num;
	while(num>0){
		digit =num%10;
		sum=sum+digit;
		pro=pro*digit;
		num=num/10;
	}
	
	cout<<"sum of the numbers="<<sum<<endl;
	
		cout<<"product of the numbers="<<pro<<endl;
	
	return 0;
}