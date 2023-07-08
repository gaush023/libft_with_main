/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 08:59:42 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/07 19:55:36 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
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
// 		printf("%s", (char *)lst->next->content);
// 	return (0);
// }
