#include <stdio.h>

void search(){
	int arr[10]={6,55,1,5,8,1,6,9,8,7};
	int count =1;
	int num;
	printf("Arrays number are:\n");
	for (int i = 0; i < 10; i++) {
        printf("%i ",arr[i]);
    }
	printf("\nEnter the number you want to search:\n");
	scanf("%i",&num);
	for(int i=0;i<10;i++){
		if(num == arr[i]){
			count =0;
			printf("number is found.");
			break;
		}
	}
	if(count){
		printf("number is not found.");
	}
}
int main() {
	search();
    return 0;
}