//Task 1

#include<stdio.h>
const int N = 10;

int main()
{
	int n, i;
	int count = 1;

	printf("Enter an integer: \n");
	scanf("%d", &n);
	printf("10 consecutive integers: \n");
	
	i = n;
	
	while (i < N + n)
	{
		i++;
		printf("%d. %d \n", count, i);
		count++;
	}
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 2

#include<stdio.h>

int main()
{
	int start, end, gap;
	printf("Enter the starting number: \n");
	scanf("%d", &start);
	printf("Enter the end number: \n");
	scanf("%d", &end);
	if(start > end)
	{
		printf("The initial condition is greater than the final condition.");
		return 1;
	}
	else
	{
	printf("Enter the size of the gap between the start and end numbers: \n");
	scanf("%d", &gap);
	printf("The next numbers in the range, that are more are:  \n");
	
	while (start <= end)
	{
		printf("%d \n", start);
		start += gap;
	}
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 3

#include<stdio.h>
const int DIVISOR_BY_10 = 10;

int main()
{
	unsigned long long n;
	int count = 1;
	printf("Write a natural number: \n");
	scanf("%llu", &n);
	
	do
	{
		n /= DIVISOR_BY_10;
		count++;
	}
	while(n > 1);
	{
		printf("Total digits: %d \n", count);
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 4

#include<stdio.h>
const int DECIMAL_SYS = 10;
const int BINARY_SYS = 2;

int main()
{
	unsigned long long decimal_n, n, remainder;
	int i = 1;
	int binary = 0;
	int count = 0;
	printf("Enter a natural number: \n");
	scanf("%llu", &n);
	
	decimal_n = n;
	
	while (n >= 1)
	{
		remainder = n % BINARY_SYS;
		if(remainder == 1)
		{
			count++;
		}
		binary += remainder * i;
		n /= BINARY_SYS;
		i *= DECIMAL_SYS;
	}
	
	printf("The entered decimal number is %llu and its binary representation is %d. \n", decimal_n, binary);
	printf("There are %llu ones in the binary representation.", count);
	return 0;
}
----------------------------------------------------------------------------------------------
