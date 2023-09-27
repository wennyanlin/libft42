/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlin <wlin@student.42barcelona.>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:38:47 by wlin              #+#    #+#             */
/*   Updated: 2023/09/27 11:48:10 by wlin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_bonus(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list) * 1);// 1 => crear espacio memoria
	if (!node)
		return (NULL);
	node->content = content;	// 2 => asignar valor
	node->next = NULL;			// 3 => apontar al siguiente (otro node o NULL)
	return (node);
}
/*
int main()
{
	int content = 1;

	t_list	*node_1 = ft_lstnew_bonus(&content);
	t_list	*node_2 = ft_lstnew_bonus(&content);
	t_list	*node_3 = ft_lstnew_bonus(&content);

	node_1->next = node_2;
	node_2->next = node_3;
	
	while (node_1)
	{
		printf("%i\n", *((int *)(node_1->content)));
		node_1 = node_1->next;
	}
}*/
/*
int main()
{
	
}*/
