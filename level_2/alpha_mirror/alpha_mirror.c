/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:57:36 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/15 17:12:00 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int	main(int argc, char **argv)
{
	int	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				argv[1][i] = 'z' - argv[1][i] + 'a';
				write(1, &argv[1][i], 1);
			}
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				argv[1][i] = 'Z' - argv[1][i] + 'A';
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
