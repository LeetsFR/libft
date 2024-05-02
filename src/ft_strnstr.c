/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 02:11:36 by mcollas           #+#    #+#             */
/*   Updated: 2024/05/02 02:11:44 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	small_length;

	small_length = ft_strlen(small);
	if (small_length == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i < n)
	{
		j = 0;
		while (big[i + j] && small[i] && big[i + j] == small[j])
		{
			if (i + j > n)
				return (NULL);
			if (j == small_length)
				return ((char *)big + i);
		}
	}
	return (NULL);
}
