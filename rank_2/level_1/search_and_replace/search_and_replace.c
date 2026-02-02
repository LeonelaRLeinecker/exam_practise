#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int i = 0;
		int len2 = ft_strlen(argv[2]);
		int len3 = ft_strlen(argv[3]);
		if (len2 == 1 && len3 == 1)
		{
			while (argv[1][i] != '\0')
			{
				if (argv[1][i] == argv[2][0])
					write(1, &argv[3][0], 1);
				else 
					write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}

