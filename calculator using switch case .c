#include<stdio.h>
int main()
{
int num1,num2;
char op;
printf(" the value of operations (+,-,*,/):=");
scanf("%c",&op);

printf("enter the numbers:");
scanf("%d %d ",&num1,&num2)	;


switch(op)
{
case '+':
printf("%d +%d=%d", num1,num2,num1+num2);
break;
 case '-':
 	printf("%d -%d =%d",num1,num2,num1-num2);
	break;
	case '*':
printf("%d *%d=%d",num1,num2,num1*num2);
break;
 case '/':
 	if(num2!=0)
 	printf("%d /%d=%d",num1,num2,num1/num2);
 	else
 	printf("error: division by zero.\n");
	break;
	default:
		printf("invalid operation\n");
	 }
return 0;	
}