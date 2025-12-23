#include<iostream>
using namespace std;
int main()
{
char ope;
double num1, num2;
cout<<"enter an operator(+,-,*,/):";
cin>>ope;
cout<<"enter 1st number ";
cin>>num1;
cout<<"enter 2nd number";
cin>>num2;

      double result=(ope== '+') ? num1+num2:
	          (ope== '-') ? num1-num2:
			  (ope== '*') ? num1*num2:
			(ope== '/') ? num1/num2:
			0;
			//default case for an operator	
	
	//display result
	if(ope=='+'|| ope=='-'|| ope=='*'||ope=='/')
	{
	cout<<"results ="<<result<<endl;
	}
	else{
		cout<<"invalid operator"<<endl;
	}
	return 0;
}