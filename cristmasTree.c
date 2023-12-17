#include<stdio.h>

int main(){

for(int i=1;i<=7;i+=2){
	for(int x=7;x>=i;x-=2){
		printf(" ");
	}
	for(int x=1; x<=i;x++){
		printf("*");

	}
printf("\n");
}
return 0;
}

