/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42barcelona.>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:59:12 by wlin              #+#    #+#             */
/*   Updated: 2023/09/26 03:04:43 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	findchar;

	findchar = c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == findchar)
			return ((char *)&s[i]);
		i++;
	}
	if (findchar == '\0')
		return ((char *)s + i);
	return (NULL);
}
/*
int	main (int argc, char **argv)
{
	if (argc == 2)
		ft_strchr(argv[1], 0);
	return (0);
}
*/
