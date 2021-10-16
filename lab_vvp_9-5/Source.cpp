#include <stdio.h>
int main()
{
	int year, century;
	printf("Enter your own year (should be positive and integer number): ");
	scanf("%d", &year);
	if (year < 1 || (year % 1 != 0))
	{
		printf("You should enter positive and integer number!!!");
	}
	else if (year > 1 && (year % 1 == 0))
	{
		century = (year / 100) + 1;
		printf("Century is: ");
		printf("%d", century);
	}
}