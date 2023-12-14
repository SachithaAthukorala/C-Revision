#include<stdio.h>

int main(){

int i,n,sum=0;
double avg;

for(i=1;i<=10;i++){
printf("Enter Number %d : ",i);
scanf("%d",&n);
sum=sum+n;
}

avg=(double)sum/10;
printf("Sum is : %d\nAverage is : %lf",sum,avg);


return 0;
}

