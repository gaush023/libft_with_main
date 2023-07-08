/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:45:20 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/08 14:18:50 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// static void	delete_node(void *nodet_content)
// {
// 	free(nodet_content);
// }

// static void	*toupper(void *content)
// {
// 	char	*tmp;
// 	size_t	n;

// 	n = 0;
// 	tmp = (char *)content;
// 	if(tmp == NULL)
// 		return (NULL);
// 	while (tmp[n] != '\0')
// 	{
// 		if (tmp[n] >= 'a' || tmp[n] < 'A')
// 			tmp[n] = tmp[n] - ('a' - 'A');
// 		n++;
// 	}
// 	return (tmp);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	new_lst = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

// int	main(void)
// {
// 	t_list	*lst1;
// 	t_list	*lst2;
// 	void	*content;
	
// 	lst1 = malloc(sizeof(t_list));
// 	if (lst1 == NULL)
// 		return (-1);
// 	content = ft_strdup("apple");
// 	lst1 = ft_lstnew(content);
// 	if (lst1 == NULL)
// 		return (-1);
// 	lst2 = ft_lstmap(lst1, toupper, delete_node);
// 	printf("%s", (char *)lst2->content);
// }
