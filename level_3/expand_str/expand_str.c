/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:39:35 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/23 17:46:07 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while(argv[1][i] <= 32)
			i++;
		while(argv[1][i])
		{
			if (argv[1][i] > 32)
				write(1, &argv[1][i], 1);
			else if (argv[1][i + 1] && argv[1][i + 1] > 32)
				write(1, "   ", 3);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
