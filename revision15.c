#include<stdio.h>


int main(){

int n,i=1,ans;

printf("Enter a Number : ");
scanf("%d",&n);

do{
ans=n*i;
printf("%d X %d = %d\n",n,i,ans);
i++;

}while(i<=12);


return 0;
}

