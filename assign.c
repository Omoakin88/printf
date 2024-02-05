#include "main.h"

/**
 * _assign - assign and count function
 * @buff: str var
 * @count: This is index counter
 * @value: the  value in the index
 * Return: int
 */

int _assign(char *buff, int count, char *value)
{
	int i = 0;

	while (value[i])
	{
		buff[i] = value[i];
		count++;
		i++;
	}
	return (count);

}

/**
 * _rev_assign - the reversed assigning function  and return count
 * @buff: str var
 * @count:  the index counter
 * @value: index vale
 * return: int
 */

int _rev_assign(char *buff, int count, char *value)
{
	int len = _strlen(value);
	int i;

	for (i = 0; i <= len; i++)
	{
		buff[i] = value[len - i];
		count++;
	}
	return (count);
}
