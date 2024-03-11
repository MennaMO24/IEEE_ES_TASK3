#include <stdio.h>

void find(int arr[]) {
	for (int i = 0; i < 5; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
	int min=arr[1];
	int max=arr[1];
    for (int i = 2; i < 5; i++) {
		if(min>arr[i]){
			min=arr[i];
		}
		if(max<arr[i]){
			max=arr[i];
		}
    }
	printf("Maximum element is : %i\nMinimum element is : %i",max,min);
}

int main() {
    int arr[5];
    find(arr);
    return 0;
}