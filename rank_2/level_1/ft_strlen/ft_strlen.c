int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
#include <stdio.h>
int main()
{
	char str[] = "hola soy 11";
	printf("espero que sea 11 y es = %d\n", ft_strlen(str));
	return 0;
}
