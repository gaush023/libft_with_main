/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 10:04:24 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/07 20:30:39 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new_node;

// 	lst = malloc(sizeof(t_list));
// 	if (lst == NULL)
// 		return (-1);
// 	lst->content = ft_strdup("Orange");
// 	lst->next = NULL;
// 	new_node = malloc(sizeof(t_list));
// 	if (new_node == NULL)
// 		return (-1);
// 	new_node->content = ft_strdup("Apple");
// 	new_node->next = NULL;
// 	ft_lstadd_front(&lst, new_node);
// 	if (lst != NULL)
// 		printf("%s", (char *)ft_lstlast(lst)->content);
// 	return (0);
// }