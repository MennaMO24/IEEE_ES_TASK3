#include <stdio.h>

void printArray(int arr[]) {
    int delete;
    for (int i = 0; i < 5; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nInput the position where to delete: ");
    scanf("%d", &delete);

    if (delete < 0 || delete >= 5) {
        printf("Invalid position to delete.\n");
    } else {
        for (int i = delete; i < 4; i++) {
            arr[i] = arr[i + 1];
        }

        printf("The new list is : ");
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[j]);
        }
    }
}

int main() {
    int arr[5];
    printArray(arr);
    return 0;
}