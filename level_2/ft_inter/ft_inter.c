/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:22:53 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/16 21:05:17 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	look_char(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return 1;
		str++;
	}
	return 0;
}

void	inter(char *s1, char*s2)
{
	char aux[128] = {0};
	int i = 0;
	
	while (*s1)
	{
		if (look_char(s2, *s1) && !look_char(aux, *s1))
		{
			write(1, s1, 1);
			aux[i] = *s1;
			i++;
			aux[i] = '\0';
		}
		s1++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n",1);
}
