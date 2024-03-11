#include <stdio.h>

void sum(int arr[]) {
	for (int i = 0; i < 3; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
	int sum=0;
    for (int j = 0; j < 3; j++) {
        sum+=arr[j];
    }
	printf("\nSum of all elements stored in the array is :\n%i",sum);
}

int main() {
    int arr[3];
    sum(arr);
    return 0;
}