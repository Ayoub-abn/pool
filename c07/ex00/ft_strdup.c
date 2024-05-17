/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:23:47 by aabdenou          #+#    #+#             */
/*   Updated: 2023/10/05 14:30:47 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] > '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*p;

	i = 0;
	len = ft_strlen(src);
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
