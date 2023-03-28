 #include "main.h"
/**
 * is_printable - check or evaluate if a character is printable
 * @c: a character to be evaluated
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

/**
 * append_hexa_code - a function that append ASCII in
 * hexadecimal code to buffer
 * @buffer: an array of characters
 * @i: index at which to start with appending
 * @ascii_code: ASCII Code
 * Return: 3 (pass always)
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* Hexa format code are always 2 digit long */
	if (ascii_code < 0)
		ascii_code *= -1;
	buffer[i++] = '\\';
	buffer[i++] = 'x';
	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - a function that verifies is a character is a digit
 * @c: a character that will be evaluated
 * Return: 1 if c is a digit, 0 for other
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - a function that converts or casts a number to a
 * specific size
 * @num: a number that is to be casted converted
 * @size: a number indicating the num to be casted to
 * Return: value of a num casted
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - a function that casts a number
 * (num) to the specified size
 * @num: a number that is to be casted
 * @size: a number indicating the num to be casted to
 * Return: value of a num cassted
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
