// Task 1+

#include<stdio.h>


int main()
{
    int number, lenght, check;

    printf("Enter a maximum of four-digit number: ");
    scanf("%d", &number);
    
    
    if (number > 0)
    {
    	lenght = log10(number) + 1;
    	if (lenght > 4)
    	{
			printf("The number entered has more digits than four. \n");
			return 1;
		
		}
    	printf("Total digits: %d. \n", lenght);
	}
	else if (number < 0)
	{
		number = number * (-1);
		lenght = log10(number) + 1;
		if (lenght > 4)
    	{
			printf("The number entered has more digits than four. \n");
			return 1;
		}
		printf("Total digits: %d. \n", lenght);
	}
	else if (number == 0)
	{
		printf("Total digits: 1. \n");
		return 0;
	}	
	
	return 0;
}
-----------------------------------------------------------------------------------------------------

// Task 2+

#include <stdio.h>

int main()
{
	double a, b, c, d;
	printf("Enter four different numbers separated by single space: \n");
	scanf("%f" "%f" "%f" "%f", &a, &b, &c, &d);
	
	if (a >= b && a >= c && a >= d)
	{
		printf("%d is the largest number. \n", a);
		return 0;
	}	
	else if (b >= a && b >= c && b >= d)
	{
		printf("%d is the largest number. \n", b);
		return 0;
	}	
	else if (c >= a && c >= b && c >= d)
	{
		printf("%d is the largest number. \n", c);
		return 0;
	}	
	else
	{
		printf("%d is the largest number. \n", d);
		return 0;
	} 
	
	return 0;
}
-----------------------------------------------------------------------------------------------------

// Task 3+

#include<stdio.h>

int main()
{
	int hour, minutes, character;
	printf("Enter the time in format: hr:mn on a 24-hour record. \n ");
	printf("It will be converted into a 12-hour record. \n ");
	scanf("%d" "%c" "%d", &hour, &character, &minutes);
	
	
	switch (hour)
	{
		case 24: case 12:
					{
					if (minutes < 10)
					{
					printf("It's an hour 12:0%d.", minutes);	
					}
					else 
					{
					printf("It's an hour 12:%d.", minutes);
					}
					break;
					}
		case 23: case 11:	
				{
					if (minutes < 10)
					{
					printf("It's an hour 11:0%d.", minutes);	
					}
					else 
					{
					printf("It's an hour 11:%d.", minutes);
					}
					break;
					}
		case 22: case 10:
					{
					if (minutes < 10)
					{
					printf("It's an hour 10:0%d.", minutes);	
					}
					else 
					{
					printf("It's an hour 10:%d.", minutes);
					}
					break;
					}
		case 21: case 9:
					{
					if (minutes < 10)
					{
					printf("It's an hour 9:0%d.", minutes);	
					}
					else 
					{
					printf("It's an hour 9:%d.", minutes);
					}
					break;
					}
		case 20: case 8:
					{
					if (minutes < 10)
					{
					printf("It's an hour 8:0%d.", minutes);	
					}
					else 
					{
					printf("It's an hour 8:%d.", minutes);
					}
					break;
					}
		case 19: case 7:
					{
					if (minutes < 10)
					{
					printf("It's an hour 7:0%d.", minutes);	
					}
					else 
					{
					printf("It's an hour 7:%d.", minutes);
					}
					break;
					}
		case 18: case 6:
					{
					if (minutes < 10)
					{
					printf("It's an hour 6:0%d.", minutes);	
					}
					else 
					{
					printf("It's an hour 6:%d.", minutes);
					}
					break;
					}
		case 17: case 5:
					{
					if (minutes < 10)
					{
					printf("It's an hour 5:0%d.", minutes);	
					}
					else 
					{
					printf("It's an hour 5:%d.", minutes);
					}
					break;
					}
		case 16: case 4:
					{
					if (minutes < 10)
					{
					printf("It's an hour 4:0%d.", minutes);	
					}
					else 
					{
					printf("It's an hour 4:%d.", minutes);
					}
					break;
					}
		case 15: case 3:
				{
					if (minutes < 10)
					{
					printf("It's an hour 3:0%d.", minutes);	
					}
					else 
					{
					printf("It's an hour 3:%d.", minutes);
					}
					break;
					}
		case 14: case 2:
					{
					if (minutes < 10)
					{
					printf("It's an hour 2:0%d.", minutes);	
					}
					else 
					{
					printf("It's an hour 2:%d.", minutes);
					}
					break;
					}
		case 13: case 1:
					{
					if (minutes < 10)
					{
					printf("It's an hour 1:0%d.", minutes);	
					}
					else 
					{
					printf("It's an hour 1:%d.", minutes);
					}
					break;
					}
		default:	{
					printf("Wrong hour was introduced.");
					break;
					}
	}	
	
	return 0;
}
-----------------------------------------------------------------------------------------------------

// Task 4+

#include<stdio.h>
#include<windows.h>
 
int main()
{ 
    int number;
    printf("Enter a number from 1-5. \n");
    scanf("%d", &number);
    
    switch (number)
    {
        case 5: {
		Beep(690, 200);
                Sleep(200);
                Beep(690, 200);
                Sleep(200);
                Beep(690, 200);
                Sleep(200);
                Beep(690, 200);
                Sleep(200);
                Beep(690, 200);
                Sleep(200);
                break;
		}
        case 4: {
		Beep(523,800);
                Sleep(200);
                Beep(523,800);
                Sleep(200);
                Beep(523,800);
                Sleep(200);
                Beep(523,800);
                Sleep(200);
                break;
		}		
        case 3: {
		Beep(523,500);
                Sleep(200);
                Beep(523,500);
                Sleep(200);
                Beep(523,500);
                Sleep(200);
                break;
		}
        case 2: {
		Beep(440,400);
                Sleep(200);
                Beep(440,400);
                Sleep(200);
                break;
		}
        case 1: {
		Beep(700,200);
                Sleep(200);
                break;
		}
        default:{
		printf("The number entered is not within the range. \n");
                break;
		}
    }
    
    return 0;
}
-----------------------------------------------------------------------------------------------------

// Task 5+

#include<stdio.h>
 
const int OVER_A = 100;
const int OVER_B = 200;
const float charge_A = 39.99;
const float charge_B = 59.99;
const float charge_C = 69.99;
const int EXTRA_A = 5;
const int EXTRA_B = 2;
 
int main()
{
    char package;
    int gb, gb_A, gb_B;
    float bill_A, bill_B, bill_C;
    printf("We have 3 packages on offer: \n");
    printf("Package A: PLN 39.99 per month. 100 GB of data. Surcharge 5 PLN for each excess gigabyte. \n");
    printf("Package B: PLN 59.99 per month. 200 GB of data. Surcharge 2 PLN for each excess gigabyte. \n");
    printf("Package C: PLN 69.99 per month. No data limit. \n");
    printf("Enter the package of your choice A, B or C: \n");
    scanf("%c", &package);
    
    printf("Enter the number of gigabytes used: \n");
    scanf("%d", &gb);
 
    if ((package == 'A' || package == 'a') && gb <= OVER_A)
    {
        bill_A = charge_A; 
        printf("You will finally pay %.2f PLN. \n", bill_A);
        return 0;
    }
    else if ((package == 'A' || package == 'a') && gb > OVER_A)
    {
        gb_A = gb - OVER_A;
        bill_A = charge_A + gb_A * EXTRA_A; 
        printf("You will finally pay %.2f PLN: \n", bill_A);
        return 0;
    }
    else if ((package == 'B' || package == 'b') && gb <= OVER_B)
    {
        bill_B = charge_B; 
        printf("You will finally pay %.2f PLN: \n", bill_B);
        return 0;
    }
    else if ((package == 'B' || package == 'b') && gb > OVER_B)
    {
        gb_B = gb - OVER_B;
        bill_B = charge_B + gb_B * EXTRA_B; 
        printf("You will finally pay %.2f PLN: \n", bill_B);
        return 0;
    }
    else if (package == 'C' || package == 'c')
    {
        bill_C = charge_C;
        printf("You will finally pay %.2f PLN: \n", bill_C);
        return 0;
    }
    else
    {
        printf("You have introduced the wrong package. Select package A, B or C. \n");
        return 1;
    }
    
    
    return 0;
}
-----------------------------------------------------------------------------------------------------

// Task 6+

#include<stdio.h>
 
const int OVER_A = 100;
const int OVER_B = 200;
const float charge_A = 39.99;
const float charge_B = 59.99;
const float charge_C = 69.99;
const int EXTRA_A = 5;
const int EXTRA_B = 2;
 
int main()
{
    char package;
    int gb, gb_A, gb_B;
    float bill_A, bill_B, bill_C, result_bill;
    printf("We have 3 packages on offer: \n");
    printf("Package A: PLN 39.99 per month. 100 GB of data. Surcharge 5 PLN for each excess gigabyte. \n");
    printf("Package B: PLN 59.99 per month. 200 GB of data. Surcharge 2 PLN for each excess gigabyte. \n");
    printf("Package C: PLN 69.99 per month. No data limit. \n");
    printf("Enter the package of your choice A, B or C: \n");
    scanf("%c", &package);
    
    printf("Enter the number of gigabytes used: \n");
    scanf("%d", &gb);
 
    if ((package == 'A' || package == 'a') && gb <= OVER_A)
    {
        bill_A = charge_A; 
        printf("You will finally pay %.2f PLN. \n", bill_A);
    }
    else if ((package == 'A' || package == 'a') && gb > OVER_A)
    {
        gb_A = gb - OVER_A;
        bill_A = charge_A + gb_A * EXTRA_A; 
        printf("You will finally pay %.2f PLN: \n", bill_A);
        
        if (gb_A > 4 && gb_A <= 100)
        {
            bill_B = charge_B;
            result_bill = bill_A - bill_B;
            printf("If you buy package B, you will save %.2f PLN: \n", result_bill);
            return 0;
        }
        else if (gb_A > 100)
        {
            gb_B = gb - OVER_B;
            bill_B = charge_B + gb_B * EXTRA_B;
            result_bill = bill_A - bill_B;
            printf("If you buy package B, you will save %.2f PLN: \n", result_bill);
            return 0;
        }
        if (gb_A > 6)
        {
            bill_C = charge_C;
            result_bill = bill_A - bill_C;
            printf("If you buy package C, you will save %.2f PLN: \n", result_bill);
            return 0;
        }
 
    }
    else if ((package == 'B' || package == 'b') && gb <= OVER_B)
    {
        bill_B = charge_B; 
        printf("You will finally pay %.2f PLN: \n", bill_B);
    }
    else if ((package == 'B' || package == 'b') && gb > OVER_B)
    {
        gb_B = gb - OVER_B;
        bill_B = charge_B + gb_B * EXTRA_B; 
        printf("You will finally pay %.2f PLN: \n", bill_B);
        if (gb_A > 5)
        {
            bill_C = charge_C;
            result_bill = bill_B - bill_C;
            printf("If you buy package C, you will save %.2f PLN: \n", result_bill);
            return 0;
        }
    }
    else if (package == 'C' || package == 'c')
    {
        bill_C = charge_C;
        printf("You will finally pay %.2f PLN: \n", bill_C);
    }
    else
    {
        printf("You have introduced the wrong package. Select package A, B or C. \n");
        return 1;
    }
    
    return 0;
}
-----------------------------------------------------------------------------------------------------

// Task 7+

#include<stdio.h>
V_CARBON_DIOXIDE = 258.0;
V_AIR = 331.5;
V_HELIUM = 972.0;
V_HYDROGEN = 1270.0;


int main()
{
	int center;
	float v, s,t;
	printf("Select the center where the sound will be heard. You have a choice: carbon dioxide, air, helium or hydrogen. Write the number 1, 2, 3 or 4. \n");
	scanf("%d", &center);
	
	if (center == 1)
	{
		v = V_CARBON_DIOXIDE;
	}
	else if (center == 2)
	{
		v = V_AIR;
	}
	else if (center == 3)
	{
		v = V_HELIUM;
	}
	else if (center == 4)
	{
		v = V_HYDROGEN;
	}
	else
	{
		printf("Choose one of the possible options: carbon dioxide, air, helium or hydrogen. \n");
		return 1;
	}
	
		printf("Write the time in seconds, which the sound will travel from center to point: \n");
		scanf("%f", &s);
		
		if (t > 0)
		{
			s = v * t;
			printf("The sound needs %f s time to travel %f m distance from center to point.", t, s);	
			return 0;	
		}
		else
		{
			printf("Entered number of seconds is out of range!");
			return 1;
		}
	
	return 0;
}
-----------------------------------------------------------------------------------------------------

// Task 8+

#include<stdio.h>
T_ALCO_M = -114;
T_ALCO_B = 78;
T_MER_M = -39;
T_MER_B = 357;
T_O2_M = -218;
T_O2_B = -163;
T_H2O_M = 0;
T_H2O_B = 100;

int main()
{
	float temp;
	printf("Enter the temperature of the substance: \n");
	scanf("%f", &temp);
	
	if (temp <= T_ALCO_M)
	{
		printf("Ethyl alcohol melts. \n");
	}
	else if(temp >= T_ALCO_B)
	{
		printf("Ethyl alcohol boils. \n");
	}
	
	if (temp <= T_MER_M)
	{
		printf("Mercury melts. \n");
	}
	else if(temp >= T_MER_B)
	{
		printf("Mercury boils. \n");
	}
	
	if (temp <= T_O2_M)
	{
		printf("Oxygen melts. \n");
	}
	else if(temp <= T_O2_B)
	{
		printf("Oxygen boils. \n");
	}
	
	if (temp >= T_H2O_M)
	{
		printf("Water melts. \n");
	}
	else if(temp >= T_H2O_B)
	{
		printf("Oxygen boils. \n");
	}
	
	return 0;
}
