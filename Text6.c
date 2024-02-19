#include<stdio.h>

int findLarge(int x[], int s){
	int largest = x[0];

	for(int i = 0; i<s; i++){
		if(x[i]>largest){
			largest =x[i];
		}
	
	}
	
	return largest;

}


int main(){

int arr[100];
int size,largest;


printf("Enter the size of the array : ");
scanf("%d",&size);

for(int i = 0;i<size;i++){
	printf("Enter a number : ");
	scanf("%d",&arr[i]);
}

largest = findLarge(arr,size);

printf("\nLargest is : %d",largest);

}

