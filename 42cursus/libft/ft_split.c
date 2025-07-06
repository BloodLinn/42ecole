/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:49:46 by aokur             #+#    #+#             */
/*   Updated: 2025/07/06 19:15:31 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			x++;
		while (s[i] != c && s[i])
			i++;
	}
	return (x);
}
int main()
{
	char a[] = "ali,baris,okur,42,istanbulda";
	printf("%d\n", count_words(a,','));
}
/*char	**ft_split(char const *s, char c)
{
 ben , ali
}*/