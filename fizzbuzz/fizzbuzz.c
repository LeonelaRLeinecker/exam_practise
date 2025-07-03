/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 18:34:59 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/03 19:25:16 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putnbr(int	n)
{
	char	c;

	if (n >= 10)
	{
		ft_putnbr( n / 10);
	}
	c = n % 10 + 48;
	write(1, &c, 1);
}

int	main(void)
{
	int	n;

	n = 1;

	while ( n >= 1 && n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
			write(1, "\n", 1);
		}
		else if (n % 3 == 0)
		{
			write(1, "fizz", 4);
			write(1, "\n", 1);
		}
		else if (n % 3 == 0)
		{
			write(1, "buzz", 8);
			write(1, "\n", 1);
		}
		else
		{
			ft_putnbr(n);
			write(1, "\n", 1);
		}
		n++;
	}
	return 0;
}
