/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 01:08:17 by marvin            #+#    #+#             */
/*   Updated: 2025/03/11 01:08:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	result = 1;
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}
