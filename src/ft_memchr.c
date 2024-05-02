/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 02:10:19 by mcollas           #+#    #+#             */
/*   Updated: 2024/05/02 02:10:23 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	size_t	i;
	char	*tmp;

	tmp = (char *)ptr;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == c)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}