#include <stdio.h>

void findSecondLargest(int arr[]) {
    printf("Input 5 elements in the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    int large = arr[0];
    int secondLarge = arr[0];
    
    for (int i = 1; i < 5; i++) {
        if (arr[i] > large) {
            secondLarge = large;
            large = arr[i];
        } else if (arr[i] > secondLarge && arr[i] != large) {
            secondLarge = arr[i];
        }
    }
    printf("The Second largest element in the array is: %d\", secondLarge);
}

int main() {
    int arr[5];
    findSecondLargest(arr);
    return 0;
}
