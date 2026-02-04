#include <unistd.h>

int is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return 1;
	return 0;
}

char	to_up(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return c;
}

int is_lower_letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	return 0;
}

int is_upper(char c)
{
	if (c >= 'A' && c<= 'Z')
		return 1;
	return 0;
}

#include <stdio.h>
int main(int argc, char **argv)
{
	int i = 1;

	if (argc > 1)
	{
		while(i < argc)
		{
			int j = 0;
			char c = argv[i][j];
			if (is_lower_letter(argv[i][0]))
			{	c = to_up(argv[i][0]);
				write(1, &c, 1);
				j++;
			}
			while (argv[i][j])
			{
				c = argv[i][j];
				if (is_upper(c))
					to_lower(c);
				else if (argv[i][j - 1] && is_space(argv[i][j - 1]) && is_lower_letter(c))
				{
					printf("esta letra %c\n", c);
					c = to_up(c);
					printf("ahora es %c\n", c);
					//write(1, &c, 1);
				}
				if (is_upper(c))
				{
					printf("esta letra %c\n", c);
					c = to_lower(c);
					printf("ahora es %c\n", c);
				}
				write(1, &c, 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
