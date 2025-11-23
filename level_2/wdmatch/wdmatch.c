/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:06:51 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/22 17:33:28 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void put_char(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	wdmatch(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 == *s2)
			s1++;
		s2++;
	}
	if (*s1 == '\0')
		return 1;
	else
		return 0;
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (wdmatch(argv[1], argv[2]))
			put_char(argv[1]);
	}
	write(1, "\n",1);
	return 0;
}
