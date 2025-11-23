/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:51:12 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/17 19:31:46 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	result;
	unsigned int	i;

	i = 0;
	result = tab[i];
	while(i <=len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}

int	main()
{
	int	tab[] = {1,5,55,10,100};
	int	len = 0;
	while(tab[len])
		len++;
	printf("es el mayor %d\n", max(tab, len));
	return 0;

}
