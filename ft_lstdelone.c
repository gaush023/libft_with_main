/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:34:29 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/07 19:55:06 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <assert.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del == NULL)
		return ;
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}

// static void	delete_node(void *nodet_content)
// {
// 	free(nodet_content);
// }

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = malloc(sizeof(t_list));
// 	if (lst == NULL)
// 		return (-1);
// 	lst->content = ft_strdup("Apple");
// 	lst->next = NULL;
// 	printf("%s\n", (char *)lst->content);
// 	ft_lstdelone(lst, delete_node);
// 	printf("%s\n", (char *)lst->content);
// }
