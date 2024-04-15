/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:01:44 by gcarrico          #+#    #+#             */
/*   Updated: 2024/04/10 12:04:10 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*source;
	char	*des;
	size_t	i;

	source = (char *)src;
	des = (char *)dest;
	i = 0;
	if (dest > source)
	{
		while (n-- > 0)
			des[n] = source[n];
	}
	else
		while (i < n)
		{
			des[i] = source[i];
			i++;
		}
	return (dest);
}
