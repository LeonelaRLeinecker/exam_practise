#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	to_lower(char c)
{
	c = c + 32;
	return (c);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i] != '\0')
		{
			if (i != 0 && (argv[1][i] >= 65 && argv[1][i] <= 90))
			{
				write(1, "_", 1);
				char c = to_lower(argv[1][i]);
				write(1, &c, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
