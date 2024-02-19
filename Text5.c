#include<stdio.h>



void convertToBin(int x){
int binary[128];
int i=0;

	while(x>0){
		binary[i]=x%2;
		x=x/2;
		i++;
	}
	
	for(int j=i-1;j>=0;j--){
	
	printf("%d",binary[j]);
	}

}



int main(){

int n;

printf("Enter a number : ");
scanf("%d",&n);

convertToBin(n);

return 0;
}

