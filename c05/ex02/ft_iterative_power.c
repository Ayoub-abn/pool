/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:25:18 by aabdenou          #+#    #+#             */
/*   Updated: 2023/10/03 09:56:20 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;
	int	i;

	r = 1;
	i = 1;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		while (i <= power)
		{
			r = r * nb;
			i++;
		}
	}
	return (r);
}
