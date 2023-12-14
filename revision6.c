#include<stdio.h>

int main(){

int number;

printf("Enter Number : ");
scanf("%i",&number);

if((number%2)==0){
printf("%i is an Even Number",number);
}else{
printf("%i is an Odd Number",number);
}

return 0;
}

