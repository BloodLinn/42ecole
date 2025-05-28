/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 19:54:16 by aokur             #+#    #+#             */
/*   Updated: 2025/03/08 18:43:37 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_str_is_lowcase(char *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] += 32;
		i++;
	}
	return (a);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	ft_str_is_lowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (c == 1)
			{
				str[i] -= 32;
				c = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			c = 0;
		else
			c = 1;
		i++;
	}
	return (str);
}
