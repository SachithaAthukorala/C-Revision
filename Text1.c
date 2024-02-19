#include<stdio.h>

int main(){
	const int city =2;
	const int week =7;
	int i,j;
	
//	  printf("Enter Cities : ");
//	  scanf("%d",&city);
//	  printf("Enter Weeks : ");
//	  scanf("%d",&week);
	
	double temp[city][week];
	
	for(i=0;i<city;i++){
		for(j=0; j<week; j++){
			printf("Enter city %d temp of week %d : ",i+1,j+1);
			scanf("%lf",&temp[i][j]);
		}
	}
	
	for(i=0;i<city;i++){
		for(j=0; j<week; j++){
			printf("Temp of city %d temp of week %d is %.2lf : \n",i+1,j+1,temp[i][j]);
		}
	}
	
	return 0;
}	 

