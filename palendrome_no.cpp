#include<iostream>
using namespace std;
int main()
{
	int num,org,rev=0,digit;
	cout<<"enter a number";
	cin>>num;
	 org=num;
	 while(num>0){
	 	digit =num%10;
	 	rev=rev*10+digit;
	 	num=num/10;
	 	
	 }
if(org==rev){
	cout<<"the number is a palendrome"<<endl;
}	
else{
	cout<<"the number is not a palendrome number"<<endl;
}
	

	return 0;
}