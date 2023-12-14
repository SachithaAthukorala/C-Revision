#include<stdio.h>

int main(){

int i,n,sum=0;
printf("Enter a Natural Number : ");
scanf("%d",&n);

for(i=1;i<=n;i++){
printf("%d\n",i);
sum=sum+i;
}

printf("Sum is : %d",sum);


return 0;
}

