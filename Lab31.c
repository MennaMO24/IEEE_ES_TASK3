#include <stdio.h>

void swap(int x, int y){
	int num =x;
	x=y;
	y=num;
	printf("first number: %i\n",x);
	printf("second number: %i",y);
}
int main() {
	int num1;
	int num2;
	
	printf("Enter first number: ");
	scanf("%i",&num1);
	printf("Enter second number: ");
	scanf("%i",&num2);
    swap(num1,num2);
    return 0;
}