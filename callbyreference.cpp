// program of call by reference
#include<iostream>
using namespace std;
void SwapReference(int &x, int &y){
	int temp =x;
	x=y;
	y=temp;
		
}
int main()
{
int a, b;
cout<<" enter the value of a";
cin>>a;
cout<<"enter the value of b";	
cin>>b;	
cout<<"before swapping reference a="<<a<<" ,b"<<b<<endl;
SwapReference(a,b);
	cout<<"after swapping reference a="<<a<<",b"<<b<<endl;
	return 0;
}