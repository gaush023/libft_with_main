/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:39:48 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/07 19:55:21 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	if (lst && *lst && del)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = tmp;
		}
	}
}

// static void	delete_node(void *node_contnet)
// {
// 	free(node_contnet);
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*lst_next;

// 	lst = malloc(sizeof(t_list));
// 	if (lst == NULL)
// 		return (-1);
// 	lst->content = ft_strdup("Apple");
// 	lst_next = malloc(sizeof(t_list));
// 	if (lst_next == NULL)
// 	{
// 		free(lst->content);
// 		free(lst);
// 		return (-1);
// 	}
// 	lst_next->content = ft_strdup("Orange");
// 	lst_next->next = NULL;
// 	lst->next = lst_next;
// 	ft_lstclear(&lst, delete_node);
// 	if (lst == NULL)
// 		printf("Your function is succes");
// 	else
// 		return (-1);
// 	return (0);
// }
