/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:13:22 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/15 19:09:01 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i; 
	int	num;
	int	sig;

	num = 0;
	i = 0;
	sig = 1;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[0] == '-')
		sig = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= 48 && str[i] <= 57)
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num * sig);	
}

#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_atoi(argv[1]));
	}
	return 0;
	
}
