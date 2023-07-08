/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 10:40:52 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/07 20:54:20 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}

// int	main(void)
// {
// 	t_list *lst;
// 	t_list *new_node;

// 	lst = NULL;
// 	new_node = malloc(sizeof(t_list));
// 	if (new_node == NULL)
// 		return (1);
// 	new_node->content = ft_strdup("Apple");
// 	new_node->next = NULL;
// 	ft_lstadd_back(&lst, new_node);
// 	if (lst != NULL)
// 		printf("%s", (char *)lst->content);
// 	return (0);
// }