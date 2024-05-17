/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:30:51 by aabdenou          #+#    #+#             */
/*   Updated: 2023/10/05 14:05:46 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*alloc_str(char **strs, int size, char *sep)
{
	int		ln;
	char	*s;
	int		i;

	i = 0;
	ln = 0;
	while (i < size)
		ln += str_len(strs[i++]);
	ln += str_len(sep) * (size - 1);
	ln++;
	if (size == 0)
		ln = 1;
	s = (char *)malloc(sizeof(char) * ln);
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		n;
	char	*cstr;

	i = 0;
	n = 0;
	cstr = alloc_str(strs, size, sep);
	if (cstr == NULL)
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			cstr[n++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			cstr[n++] = sep[j++];
		i++;
	}
	cstr[n] = '\0';
	return (cstr);
}
