/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/11/04 19:28:44 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*clear_return(t_list **new_lst, void *content, void (*del)(void *))
{
	if (content && del)
		del(content);
	ft_lstclear(new_lst, del);
	return (NULL);
}

/**
 * @brief Creates a new list by applying a function to each node’s content.
 * @param t_list *lst
 * @param void *(*f)(void*)
 * @param void (*del)(void*)
 * @return t_list*
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
			return (clear_return(&new_lst, NULL, del));
		new_node = ft_lstnew(new_content);
		if (!new_node)
			return (clear_return(&new_lst, new_content, del));
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
