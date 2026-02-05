#include <stdlib.h>
#include <stdio.h>

int len_number(int nbr)
{
	int len = 1;
	if (nbr  < 0)
	{
		nbr = -nbr;
		len++;
	}
	while(nbr > 9)
	{
		nbr = nbr / 10;
		len++;
	}
	return len;
}


char *ft_itoa(int nbr)
{
	int len = len_number(nbr);
	long n = nbr;
	char *str = malloc(sizeof(char) * len + 1);
	
	if(!str)
		return NULL;
	str[len] = '\0';
	if (n < 0)
		n = -n;
			
	while (len > 0)
	{
		len--;
		str[len] = (n % 10) + 48;
		n = n/10;
	}
	if (nbr < 0)
		str[0] = '-';
	return (str);
}


int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = ft_itoa(atoi(argv[1]));
		printf("%s\n", str);
	}
	printf("\n");
	return 0;
}
