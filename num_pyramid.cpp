#include<iostream>
using namespace std;
int main()
{
	int i,j,s;
	int rows, cols;
	cout<<"enter the number of rows";
	cin>>rows;
	cout<<"enter the number of columns";
	cin>>cols;
	for(i=1;i<=rows;i++){
   for(s=1;s<=rows-i;s++){
             cout<<" ";
}
		//print increasing numbers
		for(j=1;j<=i;j++){
			cout<<j;
			 
			}
			//print decreasing numbers
			for(j=i-1;j>=1;j--)
			{
			
		cout<<j;
	}
		cout<<endl;
	}
	
return 0;	
}