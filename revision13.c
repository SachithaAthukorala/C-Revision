#include<stdio.h>

int main(){

int i,x,y;

for(i=1;i<=7;i+=2){
	for(y=7;y>=i;y-=2){
	   printf(" ");
    }
	for(x=1;x<=i;x++){
 	 printf("*");
  	}
 printf("\n");
}

return 0;
}

