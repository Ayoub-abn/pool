/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:41:17 by aabdenou          #+#    #+#             */
/*   Updated: 2023/10/05 14:17:58 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*t;

	j = 0;
	i = max - min;
	if (min >= max)
	{
		return (0);
	}
	t = malloc (i * sizeof(int));
	if (t == NULL)
		return (-1);
	while (j < i)
	{
		t[j] = min;
		j++;
		min++;
	}
	*range = t;
	return (i);
}
