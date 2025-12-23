#include<stdio.h>
int main()
{

int fruits,vegetables,proteins,junkfood;
int fruitScore,vegScore,proScore,junkScore;
int totalScore;
printf("enter difeerent types of fruits that are serving today");
scanf("%d",fruits);
print("enter difeerent types of vegetables that are serving today");
scanf("%d",vegetables);
print("enter difeerent types of proteins that are serving today");
scanf("%d",proteins);
print("enter difeerent types of junkfoods");
scanf("%d",junkfood);
//calculate scores for each category
fruitScore=fruits*2;
//for eating 2 fruits u will get 2 points
vegScore=vegetables*3;
//for eating 3 fruits u will get 3 points 
proScore=proteins*1;
//for taking proteins u will get 1 point
junkScore=-junkfood*2;
//for eating junk foof ur 2 points will be deducted

totalScore=fruitScore+vegScore+proScore-junkScore;
printf("display fruit score =%d\n",fruitScore);
printf("display vegetables score =%d\n",vegScore);
printf("display proteins score =%d\n",proScore);
printf("display junk food score =%d\n",junkScore);

if(totalScore>=12){
printf("good score keep going");}
else if(totalScore=8){
    printf("need to make it better ");
}
else
printf("bad impression");



    return 0;
}