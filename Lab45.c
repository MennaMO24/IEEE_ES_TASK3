#include <stdio.h>

void printArray(int arr[][3]) {
	printf("Input elements in the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("element - [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[3][3];
    printArray(arr);
    return 0;
}
