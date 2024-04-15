/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:55:45 by gcarrico          #+#    #+#             */
/*   Updated: 2024/04/15 12:26:02 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*dupstr;

	total_size = nmemb * size;
	if (!(dupstr = malloc(total_size)))
		return (NULL);
	ft_bzero(dupstr, total_size);
	return (dupstr);
}
