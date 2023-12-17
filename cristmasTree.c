#include<stdio.h>

int main(){

for(int y=1;y<=10;y++){
		printf(" ");
	}
	printf("*\n");

for(int i=1;i<=8;i++){
	for(int y=8;y>=i;y--){
		printf(" ");
	}
	printf(".+");
	for(int x=1;x<=i;x++){
		printf("+");
	}for(int x=1;x<=i;x++){
		printf("+");
	}
	printf(".");
	
printf("\n");
}

for(int t=1;t<=5;t++){
for(int w=1;w<=9;w++){
	printf(" ");
	}
	for(int w=1;w<=3;w++){
	printf(":");
	}
printf("\n");
}


return 0;
}

