#include <unistd.h>

int	is_space(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i] != '\0' && !is_space(argv[1][i]))
		{
			write(1, &argv[1][i], 1);
			i++;
		}

	}
	write (1, "\n", 1);
	return 0;
}
