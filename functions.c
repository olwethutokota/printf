#include "main.h"
/**
 * print_char - Prints a char
 * @types: List arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Width
 * @precision: Precision specification
 * @size: Size specifer
 * Return: Number of chars printed
 */
int print_char9va_list types, char buffer[],
    int flags, int width, int precision, int size)
{
	char c=va_arg(types, int),

	return (handle_write_char(c,buffer,flags,width,precision,size)):
}
