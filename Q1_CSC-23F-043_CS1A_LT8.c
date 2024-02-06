#include<stdio.h>
int main()
{
	int num1, num2, sum;
	int *ptr1, *ptr2;
	
	  //Input 1st number
	printf("Enter first number: ");
	scanf("%d", &num1);
	
	  //Input 2nd number
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	//Initialize pointers
	ptr1 = &num1;
	ptr2 = &num2;
	
	//Dereference pointers and add numbers
	sum = *ptr1 + *ptr2;
	
	//Result
	printf("Sum: %d\n", sum);

     return 0;
}