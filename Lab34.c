#include <stdio.h>

void printArray() {
    int arr[3] = {2, 5, 7};

    printf("The values stored into the array are :\n");
    for (int i = 0; i < 3; i++) {
        printf("%i ", arr[i]);
    }
    printf("\nThe values stored into the array in reverse are :\n");
    for (int j = 2; j >= 0; j--) {
        printf("%i ", arr[j]);
    }
}

int main() {
    printArray();
    return 0;
}
