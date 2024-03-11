#include <stdio.h>

void printArray(int arr[]) {
	for (int i = 0; i < 10; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nElements stored in the array are :\n");
    for (int j = 0; j < 10; j++) {
        printf("element - %d : %d\n", j, arr[j]);
    }
}

int main() {
    int arr[10];
    printArray(arr);
    return 0;
}