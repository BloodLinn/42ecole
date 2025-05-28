/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 02:27:21 by marvin            #+#    #+#             */
/*   Updated: 2025/03/11 02:27:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	tut;
	int	i;

	i = 2;
	tut = 0;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			tut++;
		i++;
	}
	if (tut == 0)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
