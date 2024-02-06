#include<stdio.h>
#include<string.h>

#define max_length 100

int main()
{
	char inputString[max_length];
	
	//Taking input
	printf("Enter a string: ");
	fgets(inputString, sizeof(inputString), stdin);
	
	//Remove the newline character
	inputString[strcspn(inputString, "\n")] = '\0';
	
	//Checking string length
	int length = strlen(inputString);
	
	//Declare the pointer
	char *ptr = inputString + length - 1;
	
	//Print the string in reversed
	printf("Reversed String: ");
	while(ptr >= inputString)
	{
		printf("%c", *ptr);
		ptr--;
	}
	printf("\n");
	
	return 0;
}