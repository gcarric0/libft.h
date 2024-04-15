/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:01:02 by gcarrico          #+#    #+#             */
/*   Updated: 2024/04/15 11:31:15 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;
	char chr;

	i = 0;
	chr = c;
	while (s[i] != '\0')
	{
		if (s[i] == chr)
			return ((char *)s[i]);
		i++;
	}
	if (s[i] == '\0')
		return ((char *)s[i]);
	return (NULL);
}
