#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return 1;
	return 0;
}

int is_printable(char c)
{
	if (c >= 33 && c <= 126)
		return 1;
	return 0;
}

int start_word(char *str, int current_potition)
{
	int i = current_potition;
	if(is_printable(str[i]))
		return i;
	while (is_space(str[i])) {
		i++;
	}
	if(str[i - 1] && str[i] != '\0' && is_space(str[i-1]) && is_printable(str[i]))
	{
		return i;
	}
	return -1;
}

int end_word(char *str, int current_potition)
{
	int i = current_potition;
	while (is_space(str[i]))
		i++;
	while (is_printable(str[i]))
	{
		if (str[i + 1] && is_space(str[i + 1]))
				return i;
		i++;
	}
	return (-1);

}

void print_between(char *str, int start, int end) {
	int i = end;
	while(i >= start) {
		printf("%c", str[i]);
		i--;
	
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int start;
		int end;


		while (is_space(argv[1][i]))
			i++;
		while(argv[1][i])
		{
			if(is_printable(argv[1][i]))
			{
				start = start_word(argv[1], i);
				end = end_word(argv[1], i);
				i = end;
				printf("start = %d\n", start);
				printf("end = %d\n", end);
				while( start <= end)
				{
					write(1, &argv[1][end], 1);
					end--;

				}
			}
			else
					write(1, &argv[1][i], 1);
			i++;
		}
	}
	
	write(1, "\n", 1);
	return 0;
}
