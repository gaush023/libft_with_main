/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 08:35:17 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/07 20:25:12 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main(void)
// {
// 	t_list *lst;
// 	if(!lst)
// 		return (-1);
// 	void *content;
// 	content = ft_strdup("apple");
// 	lst = ft_lstnew(content);
// 	if(!lst)
// 		return (-1);
// 	printf("%s", (char *)lst->content);
// }