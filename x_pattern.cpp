#include<iostream>
using namespace std;
int main()
{
int rows,cols;
int i,j;
cout<<"enter the number of rows";
cin>>rows;
cout<<"enter the number of columns";
cin>>cols;
for (int i=1;i<=rows;i++)
{
    for (int j=1;j<=i;j++){

        cout<<"X";
       
    }
    
 cout<<" \n";
}
    return 0;
}