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
	if (is_printable(str[i]))
		return i;
	while(is_space(str[i]))
		i++;
	if (str[i - 1] && str[i] != '\0' && is_space(str[i - 1]) && is_printable(str[i]))
		return (i);
	return (-1);
}

int end_word(char *str, int current_potition)
{
	int i = current_potition;

	while(is_printable(str[i]))
	{
		if (!str[i + 1] || is_space(str[i + 1]))
			return (i);
		i++;
	}
	return (-1);
}


char *ft_strcpy(char *s1, int start, int end)
{
	int len = start + end + 1;
	int i = 0;
	char *s2 = malloc(sizeof(char) * len);

	while (s1[start] && is_printable(s1[start]) && start <= end)
	{
		s2[i] = s1[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}


char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int start;
	int end;
	char **matrix = malloc(sizeof(char *) * 100);

	if (!matrix)
		return (NULL);
	while(str[i])
	{
		while(is_space(str[i]))
			i++;
		if (str[i] && is_printable(str[i]))
		{
			start = start_word(str, i);
			end = end_word(str, start);
			if (start == -1 || end == -1)
				break;
			matrix[j] = ft_strcpy(str, start, end);
			j++;
			i = end;
		}
		i++;
	}
	matrix[j] = NULL;
	return (matrix);
}

int main(int argc, char **argv)
{
	char **matrix;
	if (argc == 2)
	{
		int i = 0;
		//int j = 0;
		matrix = ft_split(argv[1]);
		while(matrix[i])
		{
			printf("[%s]\n", matrix[i]);
			i++;
		}
	}
	int j = 0;
	while(matrix[j])
	{
		free(matrix[j]);
		j++;	
	}

	free(matrix);
	return 0;
}
