#include <stdio.h>

void frequency(int arr[], int freq[]) {
	for (int i = 0; i < 5; i++) {
        freq[i] = 1;
    }
	
	for (int i = 0; i < 5; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
	
	for (int i = 0; i < 5; i++) {
        int count = 1;
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }
	
    printf("\nThe frequency of all elements of an array :\n");
    for (int i = 0; i < 5; i++) {
        if (freq[i] != 0) {
            printf("%i occurs %i time%s\n",arr[i],freq[i],freq[i]>1?"s":"");
        }
    }
}

int main() {
    int arr[5];
	int freq[5] = {0};
    frequency(arr,freq);
    return 0;
}