#include<stdio.h>

int main(){

double angle1,angle2,angle3,x;

printf("Enter Angle 1 : ");
scanf("%lf",&angle1);
printf("Enter Angle 2 : ");
scanf("%lf",&angle2);

x=angle1+angle2;

if(x<180){
angle3=180-x;
printf("The other Angle is : %lf",angle3);
}else{
printf("This is not a triangle");
}

return 0;
}

