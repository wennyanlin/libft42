/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42barcelona.>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:17:09 by wlin              #+#    #+#             */
/*   Updated: 2023/09/20 18:59:46 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(size * count);
	if (str == NULL)
		return (NULL);
	while (i < (count * size))
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
/*
int	main()
{
	size_t	count = 8;
	size_t	size = 5;
	printf("%p\n", ft_calloc(count, size));
	printf("%p", calloc(count, size));
}*/
