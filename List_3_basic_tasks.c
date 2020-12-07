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
//Task 5a
//loop while
	
#include<stdio.h>

int main()
{
	unsigned int n;
	int i = 1;
	
	printf("Enter an natural number: \n");
	scanf("%du", &n);
	printf("List of consecutive natural numbers from 1 to n are: \n");
	
	
	while(i <= n)
	{
		printf("%d \n", i);
		i++;
	}
	
	return 0;
}

//loop for

#include<stdio.h>

int main()
{
	unsigned int n;
	int i;
	
	printf("Enter an natural number: \n");
	scanf("%du", &n);
	printf("List of consecutive natural numbers from 1 to n are: \n");
	
	
	for(i = 1; i <= n; i++)
	{
		printf("%d \n", i);

	}
	
	return 0;
}
----------------------------------------------------------------------------------------------
//Task 5b
//loop while
	
#include<stdio.h>

int main()
{
	unsigned int n;
	int i = 1;
	
	printf("Enter an natural number: \n");
	scanf("%du", &n);
	printf("List of consecutive natural numbers from n to 1 are: \n");
	
	i = n;
	
	while(i >= 1)
	{
		printf("%d \n", i);
		i--;
	}
	
	return 0;
}

//loop for

#include<stdio.h>

int main()
{
	unsigned int n;
	int i;
	
	printf("Enter an natural number: \n");
	scanf("%du", &n);
	printf("List of consecutive natural numbers from n to 1 are: \n");
	
	
	for(i = n; i >= 1; i--)
	{
		printf("%d \n", i);
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------
//Task 5c
//loop while
	
#include<stdio.h>

int main()
{
	unsigned int n;
	int i = 2;
	
	printf("Enter an natural number: \n");
	scanf("%du", &n);
	printf("List of consecutive natural numbers even and smaller than n are: \n");
	
	
	while(i < n)
	{
		printf("%d \n", i);
		i += 2;
	}
	
	return 0;
}

//loop for

#include<stdio.h>

int main()
{
	unsigned int n;
	int i;
	
	printf("Enter an natural number: \n");
	scanf("%du", &n);
	printf("List of consecutive natural numbers even and smaller than n are: \n");
	
	
	for(i = 2; i < n; i += 2)
	{
		printf("%d \n", i);
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------
//Task 5d
//loop while

#include<stdio.h>

int main()
{
	unsigned int n;
	int i = 1;
	
	printf("Enter an natural number: \n");
	scanf("%du", &n);
	printf("List of consecutive natural numbers odd starting with n are: \n");
	
	if( n % 2 == 0)
	{
		i = n - 1;
	}
	else
	{
		i = n;
	}
	
	while(i >= 1)
	{
		printf("%d \n", i);
		i -= 2;
	}
	
	return 0;
}

//loop for

#include<stdio.h>

int main()
{
	unsigned int n;
	int i;
	
	printf("Enter an natural number: \n");
	scanf("%du", &n);
	printf("List of consecutive natural numbers odd starting with n are: \n");
	
	if( n % 2 == 0)
	{
		i = n - 1;
	}
	else
	{
		i = n;
	}
	
	for(i = n; i >= 1; i -= 2)
	{
		printf("%d \n", i);
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------
//Task 5e
//loop while
	
#include<stdio.h>

int main()
{
	unsigned long n;
	int i = 1;
	int count = 1;
	
	printf("Enter the last natural number of the arithmetic sequence: \n");
	scanf("%lu", &n);
	printf("List of consecutive word of the arithmetic progression from 1 to %du are: \n", n);
	
	while(count <= n)
	{
		printf("%d. %d \n", count, i);
		i += 3;
		count++;
	}
	
	return 0;
}

//loop for

#include<stdio.h>

int main()
{
	unsigned long n;
	int count;
	int i = 1;
	
	printf("Enter the last natural number of the arithmetic sequence: \n");
	scanf("%lu", &n);
	printf("List of consecutive word of the arithmetic progression from 1 to %d are: \n", n);
	
	for(count = 1; count <= n; count++)
	{
		printf("%d. %d \n", count, i);
		i+= 3;
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------
//Task 5f
//loop while
	
#include<stdio.h>
const int N = 12;

int main()
{
	int n, factorial;
	int i = 1;
	int count = 1;
	
	printf("12 consecutive factorial natural numbers are: \n");
	
	i = 1;
	
	while(count <= N)
	{
		factorial = count * i;
		i = factorial;
		printf("%d! = %d \n", count, factorial);
    	count += 1;

	}
	
	return 0;
}

//loop for

#include<stdio.h>
const int N = 12;

int main()
{
	int n, factorial;
	int count;
	int i = 1;
	
	printf("12 consecutive factorial natural numbers are: \n");
	
	
	for(count = 1; count <= N; count += 1)
	{
		factorial = count * i;
		i = factorial;
		printf("%d! = %d \n", count, factorial);
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------
//Task 5g
//loop while
	
#include<stdio.h>

int main()
{
	unsigned int n;
	int i = 1;
	int count = 1;
	
	printf("Enter an natural number: \n");
	scanf("%du", &n);
	printf("List of consecutive words of the sequence an = 1/n from 1 to n are: \n");
	
	
	while(count <= n)
	{
		printf("1/%d \n", count);
		count++;

	}
	
	return 0;
}

//loop for
	
#include<stdio.h>

int main()
{
	unsigned int n;
	int count;
	int i = 1;
	
	printf("Enter an natural number: \n");
	scanf("%du", &n);
	printf("List of consecutive words of the sequence an = 1/n from 1 to n are: \n");
	
	
	for(count = 1; count <= n; count++)
	{
		printf("1/%d \n", count);
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------
//Task 5h
//loop while

#include<stdio.h>
const N = 17;

int main()
{
	int a1, an;
	int count = 1;
	
	printf("Enter the next 17 words of the sequence a1=3, an=3(an-1)-4: \n");
	
	a1 = 3;
	an = a1;
	
	while(count <= N)
	{
		printf("%d. %d \n", count, an);
		an = 3 * an - 4;
		count++;
	}
	
	return 0;
}

//loop for

#include<stdio.h>
const N = 17;

int main()
{
	int a1, an;
	int count = 1;
	
	printf("Enter the next 17 words of the sequence a1=3, an=3(an-1)-4: \n");
	
	a1 = 3;
	an = a1;
	
	for(count = 1; count <= N; count++)
	{
		printf(" %d. %d \n", count, an);
		an = 3 * an - 4;
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------
//Task 5i
//loop while

#include<stdio.h>
const int N = 31;

int main()
{
	int a0, an;
	int count = 1; 
	
	printf("Enter the next 31 words of the sequence a0 = 0, an = 2an-1 + 1 (dla n > 1): \n");
	
	a0 = 0;
	an = a0;
	
	while(count <= N)
	{
		printf("%d. %d \n", count, an);
		an = 2 * an + 1;
		count++;	
	}
	
	return 0;
}

// loop for

#include<stdio.h>
const int N = 31;

int main()
{
	int a0, an;
	int count = 1; 
	
	printf("Enter the next 31 words of the sequence a0 = 0, an = 2an-1 + 1 (dla n > 1): \n");
	
	a0 = 0;
	an = a0;
	
	for(count = 1; count <= N; count++)
	{
		printf("%d. %d \n", count, an);
		an = 2 * an + 1;	
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------
//Task 5j
//loop while
	
#include<stdio.h>

int main()
{
	unsigned int n, sum;
	int count = 1;
	
	printf("Enter an natural number: \n");
	scanf("%du", &n);
	
	
	while(count <= n)
	{
		sum += count;
		count++;
	}
	
	printf("Sum of natural numbers = %d \n", sum);
	
	return 0;
}

//loop for

#include<stdio.h>

int main()
{
	unsigned int n, sum;
	int count;
	int i = 1;
	
	printf("Enter an natural number: \n");
	scanf("%du", &n);
	
	
	for(count = 1; count <= n; count++)
	{
		sum += count;
	}
	
	printf("Sum of natural numbers = %d \n", sum);
	
	return 0;
}
----------------------------------------------------------------------------------------------
//Task 5k
//loop while	

#include<stdio.h>
#include<math.h>

int main()
{
	unsigned int n, sum;
	int count = 1;
	
	printf("Enter an natural number: \n");
	scanf("%du", &n);
	
	
	while(count <= n)
	{
		sum = sum + pow(count,2);
		count++;
	}
	
	printf("Sum of Natural Numbers = %d \n", sum);
	
	return 0;
}

//loop for

#include<stdio.h>
#include<math.h>

int main()
{
	unsigned int n, sum;
	int count;
	int i = 1;
	
	printf("Enter an natural number: \n");
	scanf("%du", &n);
	
	
	for(count = 1; count <= n; count++)
	{
		sum = sum + pow(count,2);
	}
	
	printf("Sum of Natural Numbers = %d \n", sum);
	
	return 0;
}
----------------------------------------------------------------------------------------------
//Task 5l
//loop while
	
#include<stdio.h>

int main()
{
	unsigned int n, an;
	int i = 1;
	int count_even = 0;
	int count_odd = 0;
	printf("Enter the number of words of the sequence: \n");
	scanf("%du", &n);
	
	while(i <= n)
	{
		printf("Enter the word sequence: \n");
		scanf("%du", &an);
		if(an % 2 == 0)
		{
			count_even++;
		}
		else
		{
			count_odd++;
		}
	i++;
	}
	printf("The number of even natural numbers upto: %d \n", count_even);
	printf("The number of odd natural numbers upto: %d\n", count_odd);
		
	return 0;
}

//loop for

#include<stdio.h>

int main()
{
	unsigned int n, an;
	int i;
	int count_even = 0;
	int count_odd = 0;
	printf("Enter the number of words of the sequence: \n");
	scanf("%du", &n);
	
	for(i = 1; i <= n; i++)
	{
		printf("Enter the word sequence: \n");
		scanf("%du", &an);
		if(an % 2 == 0)
		{
			count_even++;
		}
		else
		{
			count_odd++;
		}
	}
	printf("The number of even natural numbers upto: %d \n", count_even);
	printf("The number of odd natural numbers upto: %d\n", count_odd);
		
	return 0;
}
----------------------------------------------------------------------------------------------
//Task 5m
//loop while
	
#include<stdio.h>

int main()
{
	unsigned int n;
	int an;
	int i = 1;
	int count_pos = 0;
	int count_neg = 0;
	int count_zero = 0;
	printf("Enter the number of words of the sequence: \n");
	scanf("%du", &n);
	
	while(i <= n)
	{
		printf("Enter the word sequence: \n");
		scanf("%d", &an);
		if(an < 0)
		{
			count_neg++;
		}
		else if (an > 0)
		{
			count_pos++;
		}
		else
		{
			count_zero++;
		}
	i++;
	}
	printf("The number of positive integer upto: %d \n", count_pos);
	printf("The number of negative integer upto: %d \n", count_neg);
	printf("Number of zero: %d \n", count_zero);
		
	return 0;
}

//loop for

#include<stdio.h>

int main()
{
	unsigned int n;
	int an, i;
	int count_pos = 0;
	int count_neg = 0;
	int count_zero = 0;
	printf("Enter the number of words of the sequence: \n");
	scanf("%du", &n);
	
	for(i = 1; i <= n; i++)
	{
		printf("Enter the word sequence: \n");
		scanf("%d", &an);
		if(an < 0)
		{
			count_neg++;
		}
		else if (an > 0)
		{
			count_pos++;
		}
		else
		{
			count_zero++;
		}
	}
	printf("The number of positive integer upto: %d \n", count_pos);
	printf("The number of negative integer upto: %d \n", count_neg);
	printf("Number of zero: %d \n", count_zero);
		
	return 0;
}
----------------------------------------------------------------------------------------------
//Task 6
	
#include<stdio.h>

int main()
{
	float n, max;
		
	do
	{
		printf("Enter the number: \n");
		scanf("%f", &n);
		
		if(n > max)
		{
			if(n > 0)
			{
				max = n;
			}
		}	
	}
	while(n > 0);
	{
		printf("The largest number entered was: %.2f \n", max);
	}
		
	return 0;
}
----------------------------------------------------------------------------------------------
//Task 7

#include<stdio.h>

int main()
{
	int m, n, remainder, nwd;
	
	printf("Enter two positive integers : \n");
	scanf("%d" "%d", &m, &n);
	

	if(n == 0)
	{
		nwd = m;
		printf("The greatest common divisor is: %d \n", m);
		//return 0;
	}

	
	while(n != 0)
	{
		remainder = m % n;
		m = n;
		n = remainder;
		nwd = m;
	}
	printf("The greatest common divisor is: %d \n", nwd);
	
	return 0;
}
----------------------------------------------------------------------------------------------
//Task 8
	
#include<stdio.h>
const int INITIAL_AMOUNT = 1000;
const float FIRST_INTEREST = 0.1;
const float SECOND_INTEREST = 0.06;

int main()
{
	float money_a, money_f;
	int count = 0;
	
	money_a = INITIAL_AMOUNT;
	money_f = INITIAL_AMOUNT;
	
	do
	{
		money_a += INITIAL_AMOUNT * FIRST_INTEREST;
		money_f += money_f * SECOND_INTEREST;
		count++;
	}
	while(money_a > money_f);
	{
		printf("Franek will have more money than Agata after %d years. \n", count);
		printf("After %d years Franek will have %.2f zl and Agata %.2f zl. \n", count, money_f, money_a);
	}
	
	return 0;
}
