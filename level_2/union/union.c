/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:58:59 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/22 19:02:22 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_in(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return 1;
		str++;
	}
	return 0;
}

int main(int argc, char **argv)
{
	int i = 0;
	int x = 0;
	int j = 0;
	char aux[128];

	if (argc == 3)
	{
		aux[0] = '\0';
		while (argv[1][i])
		{
			if (!is_in(aux, argv[1][i]))
			{
				aux[x] = argv[1][i];
				x++;
				aux[x] = '\0';
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		while(argv[2][j])
		{
			if (!is_in(aux, argv[2][j]))
			{
				aux[x] = argv[2][j];
				x++;
				aux[x] = '\0';
				write(1, &argv[2][j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
