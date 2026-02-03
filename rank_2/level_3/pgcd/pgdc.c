#include <stdio.h>
#include <stdlib.h>

int pgcd(int a, int b)
{
	int temp;
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
		printf("a = %d\n", a);
	}
	return (a);
}
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int n = atoi(argv[1]);
		int x = atoi(argv[2]);
		printf("pgcd = %d\n", pgcd(n, x));
		return 0;

	}
}
