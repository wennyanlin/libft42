/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42barcelona.>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:59:51 by wlin              #+#    #+#             */
/*   Updated: 2023/09/15 15:59:57 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		lasti;
	char	foundchar;

	foundchar = (char)c;
	i = 0;
	lasti = 0;
	while (s[i] != '\0')
	{
		if (s[i] == foundchar)
		{
			lasti = i;
		}
		i++;
	}
	return ((char *)&s[lasti]);
}

int	main(void)
{
	const char	*s;
	int			c;
	char		*result;

	*s = "hello";
	c = 108;
	*result = strrchr(s, c);
	printf("%c", *result);
	return (0);
}
