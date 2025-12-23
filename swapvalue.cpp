// program of call by value 
#include<iostream>
using namespace std;
void SwapValue(int a, int b){
	int temp =a;
	a=b;
	b=temp;
cout<<"inside the function a="<<a<<",b"<<b<<endl;	
	
}
int main()
{
int a, b;
cout<<" enter the value of a";
cin>>a;
cout<<"enter the value of b";	
cin>>b;	
cout<<"before swapping a="<<a<<" ,b"<<b<<endl;
SwapValue(a,b);
	cout<<"after swapping a="<<a<<",b"<<b<<endl;
	return 0;
}