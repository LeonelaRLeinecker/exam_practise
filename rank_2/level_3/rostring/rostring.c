#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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
	if (is_printable(str[i]))
		return i;
	while (is_space(str[i]))
		i++;
	if (str[i - 1] && is_space(str[i - 1]) && is_printable(str[i]))
			return i;
	return (-1);
}

int end_word(char *str, int current_potition)
{
	int i = current_potition;
	while (is_space(str[i]))
	{
		i++;
	}
	while (is_printable(str[i]))
	{
		if (str[i + 1] == '\0')
			return i;

		if (str[i + 1] && is_space(str[i + 1]))
			return i;
		i++;
	}
	return (-1);
}

int get_first_word(char *str)
{
	int i = 0;
	while(is_space(str[i]))
		i++;
	i = end_word(str, i);
	return (i);
}

void print_between(char *str, int start, int end)
{
	while(start <= end)
	{
		write(1, &str[start], 1);
		start++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int start;
		int end;
		int not_first = get_first_word(argv[1]) + 1;
	//	int until_second = not_first;
		while (is_space(argv[1][not_first])) {
			not_first++;
		}
		while(argv[1][not_first])
		{
			if (is_printable(argv[1][not_first]))
			{
				start = start_word(argv[1], not_first);
				end = end_word(argv[1], start);
				print_between(argv[1], start, end);
				write(1, " ", 1);
				if (end != -1)
					not_first = end;
				else {
				}
			}
			not_first++;
		}
		start = start_word(argv[1], i);
		end = end_word(argv[1], start);
		print_between(argv[1], start, end);
		
	}
	write(1, "\n", 1);
	return 0;
}

