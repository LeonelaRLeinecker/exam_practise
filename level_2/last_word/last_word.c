/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:52:07 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/17 18:41:43 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i; 
	int	end;

	i = 0;
	end = 0;	
	if (argc == 2)
	{
		while(argv[1][i])
			i++;
		i--;
		while(i >= 0 && (argv[1][i] == 32 || argv[1][i] == 9)) //final de palabra
			i--;
		end = i;
		while (i >= 0 && (argv[1][i] != 32 && argv[1][i] != 9)) //inicio de ultima palabra
			i--;
		i++;
		while(i <= end)
		{
			write(1, &argv[1][i], 1);
			i++;
		}	
	}
	write(1, "\n", 1);
	return 0;
}

