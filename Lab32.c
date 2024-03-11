#include <stdio.h>

void swap(){
	int arr[4]={2,4,6,8};
	printf("arr[1]= %i\n",arr[1]);
	printf("arr[2]= %i\n",arr[2]);
	
	arr[1]=arr[1]^arr[2];
	arr[2]=arr[1]^arr[2];
	arr[1]=arr[1]^arr[2];
	
	printf("arr[1]= %i\n",arr[1]);
	printf("arr[2]= %i\n",arr[2]);
}
int main() {
	swap();
    return 0;
}