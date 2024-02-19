#include<stdio.h>

int check(int n){

	if(n%2==0){	   
   		return 1;
	}else{
		return 0;
	}

}


int main(){

int n;

printf("Enter a Number : ");
scanf("%d",&n);

if(check(n)){
printf("Number %d is Even Number",n);
}else{
printf("Number %d is Odd Number",n);

}

return 0;
}

