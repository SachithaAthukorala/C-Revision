#include<stdio.h>

int main(){

double temp;

printf("Enter Temperature in Centigrade : ");
scanf("%lf",&temp);

if(temp < 0){
printf("Freezing weather");

}else if(temp<10){
printf("Very Cold weather");

}else if(temp<20){
printf("Cold weather");

}else if(temp<30){
printf("Normal in Temp");

}else if(temp<40){
printf("Its Hot");

}else{
printf("Very Hot");

}



return 0;
}

