#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				//printf("letra %c\n", argv[1][i]);
				int n = argv[1][i] - 'A' + 1;
				//printf("n = %d\n", n);
				while (n > 0)
				{
					write(1, &argv[1][i], 1);
					n--;
				}
			}
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				int n = argv[1][i] - 'a' + 1;
				while (n > 0)
				{
					write(1, &argv[1][i], 1);
					n--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
			//printf("i = %d\n", i);
		}

	}
	write(1, "\n", 1);
	return 0;
}
