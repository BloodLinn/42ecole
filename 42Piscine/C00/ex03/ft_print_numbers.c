/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:20:24 by aokur             #+#    #+#             */
/*   Updated: 2025/02/22 14:31:28 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char b)
{
	write(1, &b, 1);
}

void	ft_print_numbers(void)
{
	char	numbers;

	numbers = 48;
	while (numbers <= 57)
	{
		ft_putchar(numbers);
		numbers++;
	}
}
