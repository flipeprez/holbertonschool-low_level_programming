#include "main.h"
#include <stdio.h>

/**
 * _strstr- locates a substring.
 *@haystack: variable value.
 *@needle: variable value,
 * Return: char.
 */
char *_strstr(char *haystack, char *needle)


{
	int i, f;

	f = 0;

	i = 0;


	if (needle[0])
	{
		return (haystack);
	}
	while (haystack[i])
	{
		while (needle[f] && haystack[i] == needle[i])
		{
			if (haystack[f + i] == needle[f])
				f++;
			else
				break;

		}
		if (needle[f])
		{
			i++;
			f = 0;
		}
		else
			return (haystack + i);
	}
		return (0);

}

