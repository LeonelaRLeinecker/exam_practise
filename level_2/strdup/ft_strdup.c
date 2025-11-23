/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleineck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:44:52 by lleineck          #+#    #+#             */
/*   Updated: 2025/07/16 16:57:23 by lleineck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	len;
	char	*aux;

	i = 0;
	len = 0;
	if (!src)
		return (NULL);
	while (src[len])
		len++;
	aux = malloc(sizeof(char*)*(len + 1));
	if (!aux)
	{
		free (aux);
		return (NULL);
	}
	while (src[i] != '\0')
	{
		aux[i] = src[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

#include <stdio.h>

int	main()
{
	char	*src = "hola, me copio y mido 24";
	char	*aux = ft_strdup(src);
	printf("soy aux y mido 24 %s", aux);
	free (aux);
	return 0;
}
