/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 09:30:48 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/07 20:30:29 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
// 	printf("%d", ft_lstsize(lst));
// }