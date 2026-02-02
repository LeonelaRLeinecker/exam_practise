#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int	is_power_of_2(unsigned int n)
{
	if ( n == 0)
		return 0;
	while (n % 2 == 0)
		n = n / 2;
	return (n == 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = atoi(argv[1]);
		if (is_power_of_2(n))
			printf("is power %d\n", n);
		else
			printf("false");
	}
	return 0;
}
