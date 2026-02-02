char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
#include <stdio.h>
int main()
{
	char s1[10];
	char s2[]= "hola soy copia";

	ft_strcpy(s1, s2);
	printf("cadena 2 = %s\n", s2);
	return 0;
}
