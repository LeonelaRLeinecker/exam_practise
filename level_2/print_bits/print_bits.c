/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:43:06 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/17 19:53:26 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	unsigned char bit;

	i = 7;
	while (i >= 0)
	{
		bit = ((octet >> i) & 1) + 48;
		write(1, &bit, 1);
		i--;
	}
}

int	main()
{
	unsigned char octet = 65;
	print_bits(octet);
	return 0;
}
