#include<stdio.h>

int main(){

printf("\nMarrage Status\nMarried - (Y/y)\nUnmarried - (N/n)\n\n");
printf("\nGender Status\nMale - (M/m)\nFemale - (F/f)\n\n");

int age;
char mar,gen;

printf("Enter Your Age : ");
scanf("%d",&age);
printf("Enter Marrage Status (Y/N) : ");
scanf(" %c",&mar);
printf("Enter Gender Status (M/F) : ");
scanf(" %c",&gen);


if(mar!='Y'&&mar!='y'&&mar!='N'&&mar!='n'){
	printf("Invalid Input For Marrage Status");
}else{
	if(mar=='Y'||mar=='y'){
		printf("driver is insured");
	}else{
		if(gen!='M'&&gen!='m'&&gen!='F'&&gen!='f'){
			printf("Invalid Input For Gender Status");
		}else{
			if(gen=='M'||gen=='m'){
				if(age>30){
					printf("driver is insured");
				}else{
					printf("driver is not insured");
				}
			}else{
				if(age>25){
					printf("driver is insured");
				}else{
					printf("driver is not insured");
				}
			}	 
		}	 
	
	}

}

return 0;
}




