#include<stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0, i = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    if(n < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        do {
            if(i == 1) {
                printf("%d, ", t1);
                ++i;
            }
            if(i == 2) {
                printf("%d, ", t2);
                ++i;
            }
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;

            printf("%d, ", nextTerm);
            ++i;
        } while(i <= n);
    }

    return 0;
}

