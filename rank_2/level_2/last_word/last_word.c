#include <unistd.h>
#include <stdio.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}

int is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return 1;
	return 0;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int len = ft_strlen(argv[1]);
		int i = len - 1;
		int end_word = 0;
		int start_word = 0;

		while(argv[1][i] && is_space(argv[1][i]) && i >= 0)
			i--;
		if(!is_space(argv[1][i]))
			end_word = i;
		while(argv[1][i] && !is_space(argv[1][i]) && i >= 0)
			i--;
		start_word = i + 1;
		if (i == 0 && (argv[1][i] >= 33 && argv[1][i] <= 126) && (argv[1][i] != 32 || argv[1][i] != 9))
			start_word = 0;
		while ((start_word <= end_word) && !is_space(argv[1][start_word]))
		{
			write(1, &argv[1][start_word], 1);
			start_word++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
