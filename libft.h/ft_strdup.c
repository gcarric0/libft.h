/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:28:58 by gcarrico          #+#    #+#             */
/*   Updated: 2024/04/15 11:44:08 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dupstr;

	len = ft_strlen(s) + 1;
	dupstr = (char *)malloc(len * sizeof(char));
	if (!(dupstr))
		return (NULL);
	ft_memcpy(dupstr, s, len);
	return (dupstr);
}
