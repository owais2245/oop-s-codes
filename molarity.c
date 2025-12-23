#include<stdio.h>
int main()
{
float moles,volume,molarity;

printf("enter the moles of solute");
scanf("%f",&moles);
printf("enter volume of solutions(L):");
scanf("%f",&volume);

//As we know 
molarity =moles/volume;
if(volume!=0){
printf("molarity =%f\n",molarity);

}
else{
    printf("volume cant be zero\n");
}
    return 0;
}