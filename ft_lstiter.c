/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:18:21 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/07 20:30:55 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void print_element(void *content) {
//     char *str = (char *)content;
//     printf("%s\n", str);
// }


// int	main(void)
// {
// 	t_list *lst;

// 	lst = malloc(sizeof(t_list));
// 	if (lst == NULL)
// 		return (-1);
// 	lst->content = ft_strdup("Apple");
// 	lst->next = NULL;

// 	ft_lstiter(lst, print_element);
// 	printf("%s", (char *)lst->content);

// 	return (0);
// }