#include "main.h"
  2 /**
  3  *get_width - Calculates the width for printing
  4  *@format: Formatted string in which to print the arguments.
  5  *@i: List of arguments to be printed.
  6  *@list: list of arguments.
  7  *Return: width.
  8  */
  9 int get_width(const char *format, int *i, va_list list)
 10 {
 11         int curr_i;
 12         int width = 0;
 13 
 14         for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
 15         {
 16                 if (is_digit(format[curr_i]))
 17                 {
 18                         width *= 10;
 19                         width += format[curr_i] - '0';
 20                 }
 21                 else if (format[curr_i] == '*')
 22                 {
 23                         curr_i++;
 24                         width = va_arg(list, int);
 25                         break;
 26                 }
 27                 else
 28                         break;
 29         }
 30         *i = curr_i - 1;
 31         return (width);
 32 }
