/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:17:18 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/15 18:01:14 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d\n", (atoi(argv[1]) + atoi(argv[3])));
		if (argv[2][0] == '-')
			printf("%d\n", (atoi(argv[1]) - atoi(argv[3])));
		if (argv[2][0] == '/')
			printf("%d\n", (atoi(argv[1]) / atoi(argv[3])));
		if (argv[2][0] == '*')
			printf("%d\n", (atoi(argv[1]) * atoi(argv[3])));
		if (argv[2][0] == '%')
		       printf("%d\n", (atoi(argv[1]) % atoi(argv[3])));
		
	}
	else
		write(1, "\n", 1);
	return 0;
}
