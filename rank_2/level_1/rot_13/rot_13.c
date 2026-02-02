#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while(argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 65 && argv[1][i] < 78) || (argv[1][i] >= 97 && argv[1][i] <= 110))
			{
				char c = argv[1][i] + 13;
				write(1, &c, 1);
			}
			else if ((argv[1][i] >= 78 && argv[1][i] <= 90) || (argv[1][i] >= 111 && argv[1][i] <= 122))
			{
				char c= argv[1][i] - 13;
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
