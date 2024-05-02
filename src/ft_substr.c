/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:20:54 by mcollas           #+#    #+#             */
/*   Updated: 2024/05/02 18:20:55 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t n)
{
	size_t	i;
	char	*sub;

	if (n == 0)
		return (NULL);
	sub = malloc((n + 1) * sizeof(char *));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (str[start + i] && i < n)
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
