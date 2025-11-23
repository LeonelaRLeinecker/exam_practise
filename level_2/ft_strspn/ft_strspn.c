/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:40:04 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/16 20:22:02 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	res;
	int	j;

	i = 0;
	res = 0;
	j = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				res++;
				break;
			}
			j++;
		}
		if (!accept[j])
			break;
		i++;
	}
	return (res);
}

int main()
{
	char	*s = "hola";
	char	*accept = "mundo";
	printf("%zu", ft_strspn(s, accept));
	return 0;

}
