#include <stdio.h>
#include <stdlib.h>


int pgcd(int a, int b)
{
	int i = 1;
	int pgcd = 1;

	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
			pgcd = i;
		i++;
	}
	return (pgcd);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		printf("%d\n", pgcd(a, b));
		
	}
	return 0;
}
