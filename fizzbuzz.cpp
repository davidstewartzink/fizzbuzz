// Copyright(c) 2012 Kelp Heavy Weaponry, all rights reserved
#include <stdio.h>

int main(int, char **)
{
	int s = 15;
	for (int i = 1; i <= 100; ++i)
	{
		switch(--s)
		{
		case 14:
		case 13:
		case 11:
		case 8:
		case 7:
		case 4:
		case 2:
		case 1:
			break;

		case 12:
		case 9:
		case 6:
		case 3:
			puts("fizz");
			continue;
		case 0:
			fputs("fizz ", stdout);
			s = 15;
		case 10:
		case 5:
			puts("buzz");
			continue;
		}
		printf("%d\n", i);
	}
	return 0;
}
