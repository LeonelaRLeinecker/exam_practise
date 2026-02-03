#include <unistd.h>

int is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return 0;
}

char to_up(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 1;
		while( i < argc)
		{
			int j = 0;
			while(argv[i][j])
			{
				if (argv[i][j + 1] && is_space(argv[i][j + 1]))
				{
					char c = to_up(argv[i][j]);
					write(1, &c, 1);
				}
				else if (argv[i][j + 1] == '\0')
				{
					char c = to_up(argv[i][j]);
					write(1, &c, 1);
				}
				else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				{
					char c = argv[i][j] + 32;
					write(1, &c, 1);
				}
				else 

					write(1, &argv[i][j], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}



