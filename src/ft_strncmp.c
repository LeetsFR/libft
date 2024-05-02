/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 02:11:31 by mcollas           #+#    #+#             */
/*   Updated: 2024/05/02 02:11:32 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t n)
{
	size_t	i;

	i = 0;
	while (first[i] && second[i] && first[i] == second[i] && i < n)
		i++;
	return (first[i] - second[i]);
}
