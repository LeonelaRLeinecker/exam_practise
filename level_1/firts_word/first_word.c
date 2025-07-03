/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 16:53:47 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/03 18:10:07 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0' && argv[1][i] != 32 && argv[1][i] != 9)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	else 
		write(1, "\n", 1);
	return 0;

}
