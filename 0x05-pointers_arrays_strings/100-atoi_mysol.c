#include <string.h>
#include "main.h"

/**
 * _atoi - extracts the digits from a given string
 * @s: pointer to the first element of the array
 * Return: integer in the string
 */

int _atoi(char *s)
{
	int i, j, idx; 
	int len = strlen(s);
	int num_len = 0;
	int sum = 0;

	for (idx = 0; idx < len; idx++)
	{
		if (s[idx] >= 48 && s[idx] <= 57)
		{
			num_len++;
			if (!(s[idx + 1] >= 48 && s[idx + 1] <= 57))
			{
				break;
			}
		}
	}

	for (i = idx; i < idx + num_len; i++)
	{
		if (s[i - 1] == 45 || sum < 0)
		{
			int mul = 1;

			for (j = 1; j < len - i; j++)
			{
				mul *= 10;
			}
			sum -= mul * (s[i] - 48);
		}

		else
		{
			int mul = 1;

			for (j = 1; j < len - i; j++)
			{
				mul *= 10;
			}
			sum += mul * (s[i] - 48);
		}
		
	}
	return (sum);
}
