#include <stdio.h>
#include <string.h>

int isthere(char *str, char c)
{
	int i =  0;
	while(str[i])
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}



size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	char *s2; 
	s2 = (char *)reject; 
	while (s[i] != '\0' && !isthere(s2, s[i]))
	{
		i++;
	}
	return (i);
}
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%li\n", ft_strcspn(argv[1], argv[2]));
	}
	return 0;
}
