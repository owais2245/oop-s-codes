#include<iostream>
using namespace std;
int main()
{
//array of temperatures
int temperatures[]=
{55,62,68,74,59,45,41,58,60,67,65,78,82,88,91,92,90,93,87,80,78,79,72,68,61,59};

int size=sizeof(temperatures);

int hotDays=0;
int norDays=0;
int coolDays=0;
double totaltemp=0;
cout<< "temperature report";

for(int i=0;i<size;i++)
{
 int temp=temperatures[i];
totaltemp=totaltemp+temp;
cout<<"teperature"<<temp;
if(temp>=85)
{
    cout<<"hot days\n";
    hotDays++;
}
else if(temp<60){
    cout<<"pleasent days\n";
    norDays++;
}
else
{
    cout<<"cool days\n";
    coolDays++;
}

}
double avg=totaltemp/size;
// display
cout<<"hot days"<<hotDays<<endl;
cout<<"normal days"<<norDays<<endl;
cout<<"cool days"<<coolDays<<endl;
cout<<"average temperature"<<avg<<endl;
    return 0;
}