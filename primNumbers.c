#include <stdio.h>

int main() {
    int n, i = 1, count, j;
    printf("Enter the value : ");
    scanf("%d", &n);

    do {
        count = 0;
        j = 1;

        do {
            if (i % j == 0){
                count++;
			}	 
            j++;
        } while (j <= i);

        if (count == 2){
            printf("%d ", i);
		}
        i++;
    } while (i <= n);

    return 0;
}

