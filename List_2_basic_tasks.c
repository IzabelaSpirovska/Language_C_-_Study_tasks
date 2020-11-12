//Task 1a

#include<stdio.h>

int main()
{
	int a, b, c;
	
	printf("Enter three integers separated by a single space: \n");
	scanf("%d" "%d" "%d", &a, &b, &c);
	

	if (a >= b && a >= c)
	{
		printf("%d is the largest number. \n", a);
		return 0;
	}	
	else if (b >= a && b >= c)
	{
		printf("%d is the largest number. \n", b);
		return 0;
	}	
	else
	{
		printf("%d is the largest number. \n", c);
		return 0;
	} 
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 1b

#include<stdio.h>

int main()
{
	float a, b, sum ;
	printf("Enter two negative numbers separated by a single space: \n");
	scanf("%f" "%f", &a, &b);
	
	if (a < 0 && b < 0)
	{
		sum = a + b;
		printf("The sum of two negative numbers = %d", sum);
	}
	else
	{
		printf("Enter two negative numbers.");
		return 1;
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 1c

#include<stdio.h>

int main()
{
	float a, b, sum ;
	printf("Enter two negative or two positive numbers separated by a single space: \n");
	scanf("%f" "%f", &a, &b);
	
	if (a < 0 && b < 0)
	{
		sum = a + b;
		printf("The sum of two negative numbers = %d \n", sum);
		return 0;
	}
	else if (a > 0 && b > 0)
	{
		sum = a + b;
		printf("The sum of two positive numbers = %d \n", sum);
		return 0;
	}
	else 
	{
		printf("Enter two numbers with the same characters. \n");
		return 1;
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 2

#include<stdio.h>

int main()
{
	double a = 0;
	double b = 0;

	printf("Enter two numbers separated by a space a b: \n");
	scanf("%f" "%f", &a, &b);
	
	if (a > b)
	{
		printf("Number a = %f is greater than number b = %f.\n", a, b);
		return 0;
	}
	else if (a <b)
	{
		printf("Number b = %f is greater than number a = %f.\n", b, a);
		return 0;
	}
	else
	{
		printf("The numbers a = %f and b = %f are equal.\n", a, b);
		return 0;
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 3

#include<stdio.h>

int main()
{
	float a, b;
	float x;
	printf("Enter value a: \n");
	scanf("%f", &a);

	printf("Enter value b: \n");
	scanf("%f", &b);
	
	if (a == 0 && b == 0)
	{
		printf("Infinitely many solutions.");
		return 0;
	}
	else if (a == 0 && b != 0)
	{
		printf("A conflicting equation.");
		return 0;
	}
		
	else
	{
		x = -1.0 * b / a;
		printf("I count root x = %f. \n", x);
		return 0;
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 4

#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, delta;
	float x, x_0, x_1, x_2;
	printf("Enter value a: \n");
	scanf("%f", &a);

	printf("Enter value b: \n");
	scanf("%f", &b);

	printf("Enter value c: \n");
	scanf("%f", &c);

	if (a != 0)
		{
		delta = pow(b,2) - 4 * a * c;
		}
		if (delta > 0)
		{
			x_1 = (-b - sqrt(delta))/ (2 * a);
			x_2 = (-b + sqrt(delta))/ (2 * a);
			printf("The function has two zero positions x_1 = %f and x_2 = %f. \n", x_1, x_2);
			return 0;
		}
		else if (delta == 0)
		{
			x_0 = -b / (2 * a);
			printf("The function has one zero positions x_0 = %f. \n", x_0);
			return 0;
		}
		else
		{
			printf("The function has no zero position in the set od real numbers. \n");
			return 0;
			
		}
	return 0;

}
----------------------------------------------------------------------------------------------

//Task 5

#include<stdio.h>

int main()
{
	int v;
	
	printf("Enter the wind speed in the knots: \n");
	scanf("%d", &v);
	if (v < 1)
	{
		printf("This wind speed on the Beaufort scale is Calm. \n");
		return 0;
	}
	else if (v >= 1 && v <= 3)
	{
		printf("This wind speed on the Beaufort scale is Zefir. \n");
		return 0;
	}
	else if (v >= 4 && v <= 27)
	{
		printf("This wind speed on the Beaufort scale is Breeze. \n");
		return 0;
	}
	else if (v >= 28 && v <= 47)
	{
		printf("This wind speed on the Beaufort scale is Gale. \n");
		return 0;
	}
	else if (v >= 48 && v <= 63)
	{
		printf("This wind speed on the Beaufort scale is Storm. \n");
		return 0;
	}	
	else
	{
		printf("This wind speed on the Beaufort scale is Hurricane. \n");
		return 0;
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 6
	
#include<stdio.h>

int main()
{
	float n, k;
	printf("Enter a number: \n");
	scanf("%f",&n);
	k = (n >= 0 ? n : -n);
	printf("The absolute value of %d is %d. \n", n, k);
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 7a
	
#include<stdio.h>

int main()
{
	float a, b, c, d;
	
	printf("Enter three different numbers separated by single space: \n");
	scanf("%f" "%f" "%f", &a, &b, &c);
	
    d = a >= b ? (a >= c ? a : c) : (b >= c ? b : c);
    
	printf("The biggest number is %f.\n", d);
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 7b
	
#include<stdio.h>

int main()
{
	float a, b, sum, d;
	printf("Enter two negative numbers separated by single space: \n");
	scanf("%f" "%f", &a, &b);
	
	sum = a + b;
	d = (a < 0 && b < 0) ? printf("The sum of two negative numbers = %d", sum) : printf("Enter two negative numbers.");
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 7c

#include<stdio.h>

int main()
{
	float a, b, sum, d;
	printf("Enter two negative or two positive numbers separated by single space: \n");
	scanf("%f" "%f", &a, &b);
	
	sum = a + b;
	(a < 0 && b < 0) ? 
        printf("The sum of two negative numbers = %f \n", sum) : (a > 0 && b > 0) ? 
        printf("The sum of two positive numbers = %f \n", sum) : printf("Enter two numbers with the same characters. \n");
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 8
	
#include<stdio.h>

int main()
{
	int year;
	printf("Enter the year: \n");
	scanf("%d", &year);

	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("The year is a leap.");
		return 0;
	}
	else
	{
		printf("This year is not a leap year.");
		return 0;
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 9
	
#include<stdio.h>
V_AIR = 343;
V_WATER = 1490;
V_STEEL = 5100;

int main()
{
	int center, v;
	float s,t;
	printf("Select the center where the sound will be heard. You have a choice: air, water or steel. Write the number 1, 2 or 3. \n");
	scanf("%d", &center);
	
	if (center == 1)
	{
		v = V_AIR;
	}
	else if (center == 2)
	{
		v = V_WATER;
	}
	else if (center == 3)
	{
		v = V_STEEL;
	}
	else
	{
		printf("Choose one of the possible options: air, water, steel. \n");
		return 1;
	}
	
		printf("Write the positive distance in meters, which the sound will travel in the center: \n");
		scanf("%f", &s);
		
		if (s > 0)
		{
			t = s / v;
			printf("The sound needs %f s time to travel %f m distance in the selected center.", t, s);	
			return 0;	
		}
		else
		{
			printf("Entered number of meters is out of range!");
			return 1;
		}
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 10a

#include<stdio.h>

int main()
{
	float a, b, result;
	char op, m;
	printf("Enter a simple expression: number operator number.\n");
	scanf("%f" " %c" "%f", &a, &op, &b);
	
	if (op == '+')
	{
		result = a + b;
		printf("The operator entered is +. The result of the addition is %.2f \n", result);
		return 0;
	}
	else if (op == '-')
	{
		result = a - b;
		printf("The operator entered is -. The result of the subtraction is %.2f \n", result);
		return 0;
	}
	else if (op == '*')
	{
		result = a * b;
		printf("The operator entered is *. The result of the multiplication is %.2f \n", result);
		return 0;
	}
	else if (op == '/')
	{
		result = a / b;
		printf("The operator entered is /. The result of the division is %.2f \n", result);
		return 0;
	}
	else
	{
	printf("Enter the basic operator: +, -, * or /. \n");
	return 1;
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 10b
	
#include<stdio.h>
 
int main()
{
    float a, b, result;
    char c, m;
    printf("Enter a simple expression: number operator number.\n");
    scanf("%f" " %c" "%f", &a, &c, &b);
    
    switch (c)
    {
        case '+':	{
		  			result = a + b;
                    printf("The operator entered is +. The result of the addition is %.2f \n", result);
                    break;
                	}
        case '-':   {
					result = a - b;
                    printf("The operator entered is -. The result of the subtraction is %.2f \n", result);
                    break;
                    }
        case '*':   {
					result = a * b;
                    printf("The operator entered is *. The result of the multiplication is %.2f \n", result);
                    break;
                    }
        case '/':   {
					result = a / b;
                    printf("The operator entered is /. The result of the division is %.2f \n", result);
                    break;
                    }
        default:    {
					printf("Enter the basic operator: +, -, * or /. \n");
                    break;
                    }
    }
                    
    return 0;
}	
----------------------------------------------------------------------------------------------

//Task 11

#include<stdio.h>
const int CALC_OF_TENS = 10;

int main()
{
	 int grade, numbers;
	
	printf("Enter the number of points you obtained on the test. \n");
	scanf("%d", &grade);

	
	if (grade <= 100 && grade >= 0)
	{
		numbers = grade / CALC_OF_TENS;
	}
	else if ( grade > 100 | grade < 0)
	{
		printf("The value entered is out of range: less than 0 or more than 100. \n");
		return 1;
	}
	
	
	switch (numbers)
	{
		case 10: case 9:
				{
				printf("It is a grade A. \n");
				break;
				}
		case 8:	{
				printf("It is a grade B. \n");
				break;
				}
		case 7:	{
				printf("It is a grade C. \n");
				break;
				}
		case 6:	{
				printf("It is a grade D. \n");
				break;
				}
		case 5:	{
				printf("It is a grade E. \n");
				break;
				}
		case 4: case 3: case 2: case 1:
				{
				printf("You scored less than 59 points, so it is worse than E. \n");
				break;
				}
				
		default:{	
				printf("The value entered is out of range: less than 0 or more than 100. \n");
				break;
				}
	}
	
	return 0;
}
----------------------------------------------------------------------------------------------

//Task 12
	
#include<stdio.h>
#include<ctype.h>
 
int main()
{
    char character;
    printf("Enter one character:\n");
    scanf("%c", &character);
    
    if (isalpha(character))
    {
        printf("It is a letter.\n");
        return 0;
    }
    else if (isdigit(character))
    {
        printf("It is a a number.\n");
        return 0;
    }
    else
    {
        printf("It is a special character.\n");
        return 0;
    }
    
    return 0;
}   
