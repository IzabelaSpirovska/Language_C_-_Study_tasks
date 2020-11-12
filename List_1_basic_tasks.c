//Task 1

#include <stdio.h>

int main()
{
	printf("Izabela Spirovska \n");
	printf("\"Podstawy programowania 2020/2021\" \n");

	return 0;
}
-------------------------------------------------------------------------------------------------------

//Task 2

#include<stdio.h>

int main()
{
	printf("\tIzabela Spirovska \n");
	printf("\tmobile: ... \n");
	printf("\tfax: ... \n");
	printf("\te-mail: ... \n");
  
	return 0;
}
-------------------------------------------------------------------------------------------------------

//Task 3

#include<stdio.h>

int main()
{
	int a, b;
	a = 3;
	b = 5;
	printf("a = %d \n b = %d \n", a, b);
	
	float c, d;
	c = 7.123556789;
	d = 4.123456789;
	printf("c = %f \n d = %f \n", c, d);
	
	char e, f;
	e = 'e';
	f = 'f';
	printf("e = %c \n f = %c \n ", e, f);
	
	double g, h;
	g = 3.123456789;
	h = 2.123456789;
	printf("g = %e \n h = %e \n", g, h);
	
	return 0;
}
-------------------------------------------------------------------------------------------------------

//Task 4

#include<stdio.h>
const int DAYS_IN_YEAR = 365;

int main()
{
	int years, days;
	years = 24;
	days = years * DAYS_IN_YEAR;
	printf("I have %d years, it is %d days. \n", years, days);
	
	return 0;
	
}
-------------------------------------------------------------------------------------------------------

//Task 5

#include<stdio.h>
const float PI = 3.14159;

int main()
{
	float r, h, l, area, volume;
	
	r = 3;
	h = 4;
	l = sqrt(h * h + r * r);

	area = PI * r * (r + l);
	volume = 1.0 / 3.0 * PI * r * r * h;
	
	printf("The total area of the cone is: %f \n" , area);
	printf("The volume of the cone is: %f \n", volume);
	
	return 0;
}
-------------------------------------------------------------------------------------------------------
	
//Task 6
	
#include<stdio.h>

int main()
{
	char x;
	printf("Please write one character: \n");
	scanf("%c", &x);
	printf("%c", x);
	
	return 0;
}
-------------------------------------------------------------------------------------------------------
	
//Task 7

#include<stdio.h>
const float PLN_TO_EUR_RATE = 4.49;
const float PLN_TO_DOLLAR_RATE = 3.82;
const int DAYS_IN_YEAR = 365;

int main()
{
	float money_month, money_year, euro, dollar;
	
	printf("Please write the salary for the month: \n");
	scanf("%f", &money_month);
	
	money_year = money_month * DAYS_IN_YEAR;
	euro = money_year * PLN_TO_EUR_RATE;
	dollar = money_year * PLN_TO_DOLLAR_RATE;
	
	printf("You earn %f zlotys every year.\nIn euros it is %f and in dollars: %f. \n", money_year, euro, dollar);
	
	return 0;
}
-------------------------------------------------------------------------------------------------------

// Task 8

#include <stdio.h>
#include <math.h>
const float PI = 3.14159;

int main()
{
	float r, h;

	printf("Please enter r: \n");
	scanf_s("%f", &r);
	printf("Please enter h: \n");
	scanf_s("%f", &h);

	float l = sqrt(h * h + r * r);
	float area = PI * r * (r + l);
	float volume = 1.0 / 3.0 * PI * r * r * h;

	printf("The total area of the cone is: %f \n", area);
	printf("The volume of the cone is: %f \n", volume);

	return 0;
}
-------------------------------------------------------------------------------------------------------

//Task 9
	
#include<stdio.h>
#include<math.h>

int main()
{
	float plus_power, element, negative_power, result;
	
	plus_power = pow(3.5 , 4);
	element = sqrt(7);
	negative_power = pow(12.23 , -3);
	
	result = plus_power + element - negative_power;
	
	printf("The result is: %f \n", result);
	
	return 0;
}
-------------------------------------------------------------------------------------------------------

//Task 10
	
#include<stdio.h>
const int MIN_IN_HOUR = 60;
const int SECOND_IN_HOUR = 3600;

int main()
{
	int s, min, h, number, n;
	
	printf("Please enter s: \n");
	scanf("%d", &number);
	
	min = s / MIN_IN_HOUR;
	h = number / SECOND_IN_HOUR;
	n = number % SECOND_IN_HOUR;
	min = n / MIN_IN_HOUR;
	s = n % MIN_IN_HOUR;
	
	printf("The number of seconds written by the user is: %d hours, %d minutes, %d seconds. \n", h, min, s);
	
	
	return 0;
}
-------------------------------------------------------------------------------------------------------
	
//Task 11
	
#include<stdio.h>

int main()
{
	printf("Char type takes %d byte. \n", sizeof(char));
	printf("Int type takes %d bytes. \n", sizeof(int));
	printf("Float type takes %d bytes. \n", sizeof(float));
	printf("Double type takes %d bytes. \n", sizeof(double));
	
	return 0;
}
-------------------------------------------------------------------------------------------------------
	
//Task 12
	
#include<stdio.h>

int main()
{
	int a, b, c, d, common_denom, numerator1, numerator2, sum_num;
	char z;
	
	printf("Enter the numerator and denominator in the format a/b \n: ");
	scanf("%d%c%d", &a, &z, &b);
	printf("Written fraction: %d/%d. \n", a, b);
	printf("Enter the numerator and denominator in the format c/d \n: ");
	scanf("%d%c%d", &c, &z, &d);
	printf("Written fraction: %d/%d. \n", c, d);

	if (b != d)
	{
		numerator1 = a * d;
		numerator2 = c * b;
		common_denom = b * d;
		sum_num = numerator1 + numerator2;
		printf("The sum of the fractions is: %d/%d. \n", sum_num, common_denom);
	}
	else 
	{
		numerator1 = a + c;
		common_denom = b;
		printf("The sum of the fractions is: %d/%d. \n", numerator1, common_denom);
	}
	

	return 0;
}
-------------------------------------------------------------------------------------------------------
	
//Task 13
	
#include <stdio.h>
int main()
{
    int sum;
    //WYLICZ WYNIK
    sum = 25 + 37 - 19;
    // POKAZ WYNIK
    printf(" Odpowiedzia jest %d. \n", sum);

    return 0;
}
