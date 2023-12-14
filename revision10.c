#include<stdio.h>
int main(){

printf("Area of a Circle (C)\n");
printf("Area of a Rectangle (R)\n");
printf("Area of a Trangle (T)\n");

char shape;
double r,w,h,area;
const double pi=3.14;
printf("Enter the Geometricle Shape (use the letter): ");
scanf("%c",&shape);

switch (shape){

case 'C' :
printf("Enter Radius of the Circle : ");
scanf("%lf",&r);
area = pi*r*r;
printf("Area of the Circle : %lf",area);
break;

case 'R' :
printf("Enter Width of the Rectangle : ");
scanf("%lf",&w);
printf("Enter Height of the Rectangle : ");
scanf("%lf",&h);
area = w*h;
printf("Area of the Rectangle : %lf",area);
break;

case 'T' :
printf("Enter Height of Trangle: ");
scanf("%lf",&h);
printf("Enter Base Width of Trangle : ");
scanf("%lf",&w);
area = 0.5*w*h;
printf("Area of the Trangle : %lf",area);
break;


default  : printf("Invalid Input");
}


return 0;
}

