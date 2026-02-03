#include <unistd.h>

int is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return 1;
	return 0;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while(argv[1][i])
		{
			//char c = argv[1][i];
			if (is_space(argv[1][i]))
				i++;
			if (argv[1][i] >= 33 && argv[1][i] <= 126)
			{
				write(1, &argv[1][i], 1);
				if (argv[1][i + 1] && argv[1][i + 1] == 32)
				{
					write(1, " ", 1);
					i++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;

}
