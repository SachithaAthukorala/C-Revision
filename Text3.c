#include<stdio.h>


void swap(int*f,int*s){
	int temp = *f;
	*f=*s;
	*s=temp;

}


int main(){

int num1,num2;

printf("Enter Value 1 : ");
scanf("%d",&num1);
printf("Enter Value 2 : ");
scanf("%d",&num2);


printf("Before num1 = %d \nnum2 = %d\n\n",num1,num2);

swap(&num1,&num2);

printf("After num1 = %d \nnum2 = %d",num1,num2);

}

