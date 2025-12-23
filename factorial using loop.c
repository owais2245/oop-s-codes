#include<stdio.h>
int main()
{
int i,n;
unsigned long long fact =1;	
	printf("enter the value of a number =");
	scanf("%d",&n);
	if(n<0)
	printf("factorial of negative no doesnt exist");
	else
	for(i=1;i<=n;i++){
	
	fact=fact*i;
		printf("the factorial of a number =%d =%llu\n",fact);	
	}
	
return 0;	
	
}