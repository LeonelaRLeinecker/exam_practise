/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:00:10 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/16 19:38:49 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	char aux;
	int i;
	int len;

	i = 0; 
	len = 0;
	while (str[len])
		len++;
	while (i < (len / 2))
	{
		aux = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = aux;
		printf("en cambio s1 %c por aux %c\n", aux, str[i]);
		i++;
	}
	return (str);
}

int main()
{
	char	str[] = "hola bebe";
	printf("%s", ft_strrev(str));
	return 0;
}
