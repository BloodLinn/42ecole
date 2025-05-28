/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:35:49 by aokur             #+#    #+#             */
/*   Updated: 2025/03/09 00:29:42 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *b)
{
	int	i;

	i = 0;
	while (b[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}
