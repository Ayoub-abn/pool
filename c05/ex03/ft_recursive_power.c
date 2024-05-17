/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:49:22 by aabdenou          #+#    #+#             */
/*   Updated: 2023/10/03 10:00:49 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
		r = r * nb * ft_recursive_power (nb, power - 1);
	return (r);
}
