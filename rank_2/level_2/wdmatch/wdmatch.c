#include <unistd.h>
#include <stdio.h>
int isthere(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}
int wdmatch(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
			s1++;
		s2++;
	}
	if (*s1 == '\0')
		return 1;
	return 0;
}
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		printf("mi codigo--------------------------------\n");
		while(argv[1][i])
		{
			if (isthere(argv[2], argv[1][i]))
			{
				write(1, &argv[1][i], 1);
				argv[2]++;
			}
			i++;
		}

		/*printf("otra solucion-----------------------------------\n");
		if (wdmatch(argv[1], argv[2]))
			printf("%s\n", argv[1]);*/
	}
	write(1, "\n", 1);
	return 0;
}
