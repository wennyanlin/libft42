/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42barcelona.>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:07:57 by wlin              #+#    #+#             */
/*   Updated: 2023/09/20 13:00:20 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if(c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' \
		   	|| c == ' ')
		return (1);
	return (0);
}
int	ft_atoi(const char *str)
{
	int	i;
	int	flag;
	int	total;

	i = 0;
	flag = 1;
	total = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag *= -1;
		i++;
	}
	while ((str[i] >= '0' & str[i] <= '9'))
	{
		total = total * 10 + str[i] - '0';
		i++;
	}
	return (total * flag);
}
