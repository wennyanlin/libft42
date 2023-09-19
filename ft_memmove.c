/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42barcelona.>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:10:29 by wlin              #+#    #+#             */
/*   Updated: 2023/09/19 17:42:26 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*pdst;
	char	*psrc;
	size_t	i;

	pdst =  (char *)dst;
	psrc = (char *)src;
	i = 0;
	if (!pdst && !psrc)
		return (NULL);
	if (dst > src)
	{
		while (len)
		{
			pdst[len - 1] = psrc[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	return (dst);
}
/*	
int main()
{
	char dst[] = "hola";
	//char src[] = "adios";
	//size_t len = 3;

	ft_memmove(&dst[1], &dst[0], 3);
	printf("ft_memmove(): %s\n", dst);
	memmove(&dst[1], &dst[0], 3);
	printf("memmove(): %s\n", dst);
}*/
