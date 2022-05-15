#include "armstrong_numbers.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_LENGTH 10

int is_armstrong_number(int candidate)
{
   char buffer[MAX_LENGTH];
   int sum = 0;
   int length = sprintf(buffer, "%d", candidate);
   for (int i = 0; i < length; i++) 
   {
      int digit = buffer[i] - '0';
      sum += pow(digit, length);
   }
   return sum == candidate;
}