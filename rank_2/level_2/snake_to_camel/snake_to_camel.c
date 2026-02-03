#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int x = 0;
		int len = ft_strlen(argv[1]);
		char aux[len];

		while(argv[1][i])
		{
			if (argv[1][0] >= 'A' && argv[1][i] <= 'Z')
				aux[0] = (argv[1][i] + 32);
			else if (argv[1][i] == '_' && (argv[1][i + 1] >= 'a' && argv[1][i + 1] <= 'z'))
			{
				i++;
				aux[x] = (argv[1][i] - 32);
			}
			else
				aux[x] = argv[1][i];
			i++;
			x++;
		}
		aux[x] = '\0';
		x = 0;
		while(aux[x])
		{
			write(1, &aux[x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
	return 0;

}
