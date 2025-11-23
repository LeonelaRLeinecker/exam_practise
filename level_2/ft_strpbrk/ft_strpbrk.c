/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:20:16 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/16 18:59:08 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return NULL;
}
#include <stdio.h>
int main()
{
	char *s1 = "abc";
	char *s2 = "ic";

	printf("%s", ft_strpbrk(s1, s2));
	return 0;
}
