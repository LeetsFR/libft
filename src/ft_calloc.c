/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 02:10:03 by mcollas           #+#    #+#             */
/*   Updated: 2024/05/02 02:13:17 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
  void * ptr;
  if(count == 0 || size == 0)
    return(NULL);
  if(count % size != 0)
    return(NULL);
  ptr = malloc(count * size);
  if(ptr == NULL)
    return(NULL);
  ft_bzero(ptr,count );
  return(ptr);
}
