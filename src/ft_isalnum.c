/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:11:58 by mcollas           #+#    #+#             */
/*   Updated: 2024/05/02 18:25:43 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c <= 'a' && c >= 'z')
		return (1);
	if (c <= 'A' && c >= 'Z')
		return (1);
	if (c <= '0' && c >= '9')
		return (1);
	return (0);
}
