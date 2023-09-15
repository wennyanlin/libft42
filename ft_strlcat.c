/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42barcelona.>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:51:27 by wlin              #+#    #+#             */
/*   Updated: 2023/09/14 13:51:30 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	destlen;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	destlen = i;
	if (destlen > d)
	while (src[j] && dstsize != 0 && j < (dstsize - j -  1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	while (src[j])
		j++;
	return (destlen + j);
}

int	main()
{
	size_t dstsize = 10;
	char *src = "789";
	char dest[20] = "122242424242342";//
	printf("%zu\n", ft_strlcat(dest, src, dstsize));
	//printf("%zu", strlcat(dest, src, dstsize));
	printf("%s\n", dest);
	return (0);
}
