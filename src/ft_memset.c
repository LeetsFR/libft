/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:12:20 by mcollas           #+#    #+#             */
/*   Updated: 2024/05/01 13:15:16 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	if (ptr == NULL)
		return (NULL);
	i = 0;
	tmp = (unsigned char *)ptr;
	while (i < n)
	{
		tmp[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
