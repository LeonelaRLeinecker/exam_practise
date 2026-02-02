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
	return (0);
}

size_t ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	char *s2;
	s2 = (char *)accept;
	while (s[i] && isthere(s2, s[i]))
	{
		i++;
	}
	return (i);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%li\n", ft_strspn(argv[1], argv[2]));
	}
	return 0;
}

