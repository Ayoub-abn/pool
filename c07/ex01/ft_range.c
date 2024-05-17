/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:18:13 by aabdenou          #+#    #+#             */
/*   Updated: 2023/10/05 14:32:37 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	size;

	if (min >= max)
		return (0);
	i = 0;
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (!range)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
