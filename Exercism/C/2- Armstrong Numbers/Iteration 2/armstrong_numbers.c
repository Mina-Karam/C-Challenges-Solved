#include "armstrong_numbers.h"
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool is_armstrong_number(int number)
{
   int exponent;
   int final = number;
   int sum = 0;
   
   exponent = floor(log10(number) + 1);

   while (number > 0) 
   {
      int digit = number % 10;
      sum = sum + pow(digit, exponent);
      number /= 10; 
   }
   return sum == final;
}