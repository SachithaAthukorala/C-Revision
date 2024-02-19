#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct myStruct{
	char myName[20];
	int mobile;
};

int main(){
	struct myStruct s1,s2;

    strcpy(s1.myName,"sachitha");
	s1.mobile = 07121212121;

	strcpy(s2.myName,"shitha");
	s2.mobile = 07131212121;

printf("Name %s ",s1.myName);
	
return 0;
}

