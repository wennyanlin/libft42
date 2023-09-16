/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42barcelona.>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:51:27 by wlin              #+#    #+#             */
/*   Updated: 2023/09/16 18:29:56 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *p)
{
	size_t	i;

	i = 0;
	while (p[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	c;

	c = 0;
	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (dstsize < i)
		return (j + dstsize);
	if (i < dstsize - 1 && dstsize > 0)
	{
		while (src[c] && i + c < dstsize - 1)
		{
			dest[i + c] = src[c];
			c++;
		}
		dest[i + c] = '\0';
	}
	return (j + i);
}
/*
int	main()
{
	size_t dstsize = 8;
	char *src = "789";
	char dest[20] = "12345678";
	printf("%zu\n", ft_strlcat(dest, src, dstsize));
	printf("%zu\n", strlcat(dest, src, dstsize));
	printf("%s\n", dest);
	return (0);
}*/
