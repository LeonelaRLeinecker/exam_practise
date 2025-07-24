/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:34:05 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/24 19:19:09 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int to_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (c - 48);
	else if (c >= 'a' && c <= 'z')
		return (10 + (c - 'a'));
	else if (c >= 'A' && c <= 'Z')
		return (10 + (c - 'A'));
	else 
		return -1;
}

int atoi_base(const char *str, int base)
{
	int res = 0;
	int i = 0;
	int sign = 1;
	int val;

	if (base < 2 || base > 16)
	{
		return 0;
	}

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	
	while (str[i] != '\0')
	{
		char c = str[i];
		if (c >= 'A' && c <= 'Z')
			 c += 32;
		val = to_digit(c);
		if (val < 0 || val >= base)
			break;
		res = res * base + val;
		i++;
	}
	return (res * sign);
}

int main(int argc, char **argv)
{
	if (argc==3)
	{
		int num = atoi_base(argv[1], atoi(argv[2]));
		printf("%d", num);
	}
	return 0;
}
