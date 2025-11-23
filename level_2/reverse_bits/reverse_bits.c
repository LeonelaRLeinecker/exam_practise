/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:59:28 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/17 20:27:55 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	octet = (octet >> 4 & 0b00001111) | (octet << 4 & 0b11110000);
	octet = (octet >> 2 & 0b00110011) | (octet << 2 & 0b11001100);
	octet = (octet >> 1 & 0b01010101) | (octet << 1 & 0b10101010);
	return (octet);	
}

int	main()
{
	unsigned char octet = 65;
	reverse_bits(octet);
	return 0;
}
