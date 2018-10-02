#include "holberton.h"

char *_strpbrk(char *s, char *accept)
{
	int scount, account;

	for (scount = 0; s[scount] != '\0'; scount++)
	{
		for (account = 0; accept[account] == s[scount]; account++)
		{
			s++;
			return (s + 1);
		}
	}	
	return (s);
}
