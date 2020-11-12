// Task 1+

#include<stdio.h>
const float GALLONS_TO_LITERS = 3.785;
const float MILES_TO_KM = 1.609;

int main()
{
  float mile, gallon, result, result2;
	printf("Enter the number of miles driven: \n");
	scanf("%f", &mile);
	
	printf("Enter the number of gallons of fuel used: \n");
	scanf("%f", &gallon);
	
	result = mile / gallon;
  printf("Fuel consumption level in mil/gallon units: %.1f \n", result);
    
	result2 = (gallon * GALLONS_TO_LITERS * 100 ) / (mile * MILES_TO_KM );
	printf("Fuel consumption level in liters/100 km units: %.1f \n", result2);
	
	return 0;
}
----------------------------------------------------------------------------------------------------

//Task 2+

#include<stdio.h>
float const g = 9.81;

int main()
{
  float weight, result;
  
	printf("Enter your body weight in kg: \n");
	scanf("%f", &weight);
  
	result = weight * g;
	printf("The force of the Earth's gravity for a body weighing %.2f kg in Poland is %f kg * m/ s^2. \n", weight, result);
	
	return 0;
}
----------------------------------------------------------------------------------------------------

//Task 3a+

#include<stdio.h>
 
int main()
{
    char num[3], rev_num[3];
    int lenght, i, check_if_digit, continue_flag;
    
    printf("Enter the positive three digid number: \n");
    scanf("%[-~]", &num);
    
    lenght = strlen(num);
    
    if (lenght != 3)
    {
        printf("Entered number has not 3 digits! \n");
     }
    else
    {
        printf("Entered number is correct. \n");
        for (i = 0; i < lenght; ++i)
        {
            check_if_digit = isdigit(num[i]);
            if (check_if_digit != 1)
            {
                printf("Entered number is not correct! \n");    
            }
            else
            {
                continue_flag = 1;
            }
        }   
        
        if (continue_flag == 1)
        {
            rev_num[0] = num[2];
            rev_num[1] = num[1];
            rev_num[2] = num[0];
            printf("Reversed number: %s. \n", rev_num);
            
        }
    }
    
    return 0;   
}
----------------------------------------------------------------------------------------------------

//Task 3b+

#include<stdio.h>

const int CALC_OF_HUNDREDS = 100;
const int CALC_OF_TENS = 10;

int main()
{
  int num, result, result2, result3, result4;
  
	printf("Enter the positive three digid number. \n");
	printf("The first three digits will be use for calculations.\n");
	printf("Enter numbers: \n");
  scanf("%3d", &num);
  
  result = num / CALC_OF_HUNDREDS;
  result2 = num % CALC_OF_HUNDREDS;
  result3 = result2 / CALC_OF_TENS;
  result4 = result2 % CALC_OF_TENS;
	
	printf("Reversed number: %d%d%d. \n", result4, result3, result);
	
	
	return 0;
}
----------------------------------------------------------------------------------------------------

//Task 4+

#include<stdio.h>

int main()
{
  int area_code, three_numbers, two_numbers, two2_numbers;
  
	printf("Enter your phone number in the form: area code 3_numbers 4_numbers. \n ");
	scanf("%2d" "%3d" "%2d" "%2d" , &area_code, &three_numbers, &two_numbers, &two2_numbers);
  printf("Enter your phone number in the form: (%2d) %3d-%2d-%2d \n ", area_code, three_numbers, two_numbers, two2_numbers);

  return 0;   
}
----------------------------------------------------------------------------------------------------

//Task 5+

#include<stdio.h>
 
int main()
{
    int i, sum;
    int nominal_value[6] = {500, 200, 100, 50, 20, 10};
        
    printf("Enter the sum of money: \n");
    scanf("%d", &sum);
 
    for (i = 0; i <= 6; i++) 
    {
        int t = nominal_value[i];
        int n = sum / t;
        printf("%d\n", sum);
            if (sum >= 10)
            {
                printf("Nomination of the note %d zl is %d. \n", nominal_value[i], n);
            }
            else
            {
                printf("The coins %d zl is 1. \n", sum);
            }
            sum = sum - (t * n);
    }
    
    return 0;
}
----------------------------------------------------------------------------------------------------

//Task 6+

#include<stdio.h>
#include<math.h>

int main()
{
  int x, calc_math, calc2;
	printf("The program will calculate the following polynomial: \n");
  printf("The first result will be calculated from the formula: 2x^5 - 4x^4 - 2x^3 - 6x^2 + x - 7 \n");
	printf("The second result will be calculated from the formula: x(x(x(x(2x - 4)-2)-6)+1)-7 \n");
	printf("Enter the value of the variable x: \n");
	scanf("%d", &x);
	
	calc_math = (2 * pow(x, 5)) - (4 * pow(x, 4)) - (2 * pow(x, 3)) - (6 * pow(x, 2)) + x - 7;
	printf("First result = %d \n", calc_math);
	
	calc2 = x*(x*(x*(x*(2 * x - 4) - 2) - 6) + 1) - 7;
	printf("Second result = %d \n", calc2);
	
	
	return 0;
}
----------------------------------------------------------------------------------------------------

//Task 7+

#include<stdio.h>

int main()
{
  unsigned int a, b, result;
	printf("Write the natural number a: \n");
	scanf("%u", &a);
	
	printf("Write the natural number b: \n");
	scanf("%u", &b);
	
	result = a + b - a % b;	
	printf("The result of the calculation according to the formula a + b - a % b = %u \n", result);
	
	return 0;
}
----------------------------------------------------------------------------------------------------

//Task 8+

#include<stdio.h>

int main()
{
	int int_1, int_2, print_int, scan_int;
	float print_float, scan_float;
	char print_char, scan_char;
	
	print_int = printf("%d \n", &int_1);
	print_char = printf("%d \n", &int_1);
	print_float = printf("%d \n", &int_1);
	
	printf("Printf() function return as int: %d \n", print_int);
	printf("Printf() function return as char: %c \n", print_char);
	printf("Printf() function return as float: %f \n", print_float);
	
	scan_int = scanf("%c", &int_2);
	scan_char = scanf(" %c", &int_2);
	scan_float = scanf(" %c", &int_2);
	
	printf("Scanf() function return as int: %d \n", scan_int);
	printf("Scanf() function return as char: %c \n", scan_char);
	printf("Scanf() function return as float: %f \n", scan_float);
	
	
	return 0;
}
