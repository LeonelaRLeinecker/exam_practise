/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:03:51 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/22 20:17:19 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putnbr(int n)
{
	char c;
	if (n >= 10)
		putnbr(n/10);
	c = n % 10 + 48;
	write(1, &c, 1);
}
int atoi(char *str)
{
	int i = 0;
	int num = 0;

	while(str[i] != '\0')
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num);
}

int	is_prime(int n)
{
	int i = 2;
	if (n < 2)
		return 0;
	while (i * i <= n)
	{
		if ( n % i == 0)
			return 0;
		i++;
	}
	return 1;
}
int main(int argc, char **argv)
{
	int sum = 0;
	int n = 2;
	int num = 0;
	if (argc != 2)
	{
		write(1, "0", 1);
		write(1, "\n", 1);
	}
	else
	{
		num = atoi(argv[1]);

		while (n <= num)
		{
			if (is_prime(n))
				sum += n;
			n++;		
		}
		putnbr(sum);
		write(1, "\n", 1);
	}
	return 0;
}
