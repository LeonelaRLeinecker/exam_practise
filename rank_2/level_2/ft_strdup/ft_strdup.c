#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int i = 0;
	int len = ft_strlen(src) + 1;
	char *dup; 
	dup = malloc(sizeof(char) * len);
	while(src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("esto es src: '%s'\n", argv[1]);
		printf("esto es dup: '%s'\n", ft_strdup(argv[1]));
	}
	free(ft_strdup(argv[1]));
	return 0;
}
