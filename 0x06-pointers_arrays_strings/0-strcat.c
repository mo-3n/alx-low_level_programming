#include "main.h"

/**
 * _strcat - This function do something.
 *
 * @dest: Argument description.
 * @src: Argument description.
 *
 * Return: return value description.
 */
char *_strcat(char *dest, char *src)
{
/* refdest keep track of the begining of dest array */	
	char *refdest = dest;

/* while *dest is not 0 place *dest pointer at the end of dest character array */
	while (*dest)
	{
		dest++;
	}
/* while *src is not 0 copy *src into *dest */
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
/* add 0 at the end of dest character array */
	*dest = '\0';
/* return final oncatenated array */
	return (refdest);
}


