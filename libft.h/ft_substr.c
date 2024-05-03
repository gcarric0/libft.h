/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:50:43 by gcarrico          #+#    #+#             */
/*   Updated: 2024/04/24 11:21:09 by gcarrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			substr[j] = s[i];
			j++;
		}
		i++;
	}
	substr[j] = '\0';
	return (substr);
}

/* #include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int	main(void)
{
	char *str = "Hello, world!";
	unsigned int start = 7;
	size_t len = 5;

	char *substring = ft_substr(str, start, len);

	if (substring)
	{
		printf("Original string: %s\n", str);
		printf("Substring: %s\n", substring);
		free(substring);
	}
	else
	{
		printf("Substring is NULL\n");
	}

	return (0);
}*/
