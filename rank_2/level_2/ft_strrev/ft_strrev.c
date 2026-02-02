#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}
char *ft_strrev(char *str)
{
	int i = 0;
	int len = ft_strlen(str);
	char temp[len];

	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	i = 0;
	while (i <= len)
	{
		str[i] = temp[len - i - 1];
		i++;
	}
	str[len] = '\0';
	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("esta es la cadena original: '%s'\n", argv[1]);
		printf("esta es la cadena modificada: '%s'\n", ft_strrev(argv[1]));
	}
	return 0;
}
