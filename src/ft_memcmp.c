/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 02:10:26 by mcollas           #+#    #+#             */
/*   Updated: 2024/05/02 02:10:28 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t			i;
	unsigned char	*tmp_ptr1;
	unsigned char	*tmp_ptr2;

	tmp_ptr1 = (unsigned char *)ptr1;
	tmp_ptr2 = (unsigned char *)ptr2;
	i = 0;
	while (i < n && tmp_ptr1[i] == tmp_ptr2[i])
		i++;
	return (tmp_ptr1[i] - tmp_ptr2[i]);
}
