/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martafer <martafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:54:29 by martafer          #+#    #+#             */
/*   Updated: 2025/10/27 15:49:47 by martafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result_lst;
	void	*new_content;
	t_list	*new_node;

	if (!f || !del || !lst)
		return (NULL);
	result_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&result_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&result_lst, new_node);
		lst = lst->next;
	}
	return (result_lst);
}
