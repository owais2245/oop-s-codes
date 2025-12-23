#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter how many numbers u want to input ";
cin>>n;
int smNo,larNo;
int num;
int sum=0;
float avg;
cout<<"the value of the largest number =:";
cin>>larNo;
cout<<"the value of smallest number=:";
cin>>smNo;
for(int i=2;i<=n;i++)
{
   cout<<"enter a num";
   cin>>num;
    if(num<smNo){
        num=smNo;
    }

    if(num>larNo)
    {
        num=larNo;
    } 
    sum=sum+num;
    avg=sum/n;
}
//displaying the smallest and largest number 
cout<<"the value of the largest number = "<< larNo<<endl;
cout<<"the value of the smallest number ="<<smNo<<endl;

return 0;
}