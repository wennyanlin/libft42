/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42barcelona.>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:50:26 by wlin              #+#    #+#             */
/*   Updated: 2023/09/25 15:06:42 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#define UNUSED(x) (void)(x)

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL && f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*
void	transform_char(unsigned int i, char *c)
{
	UNUSED(i);
	*c = ft_toupper(*c);
}

int	main()
{
	char s[] = "morning wen!";

	ft_striteri(s, &transform_char);
	printf("%s", s);
	return (0);
}*/
