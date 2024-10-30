/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 23:38:21 by milsanch          #+#    #+#             */
/*   Updated: 2024/10/09 16:48:03 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void(*del)(void*))
{
	t_list	*lst2;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (0);
	lst2 = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			ft_lstclear(&lst2, del);
			return (0);
		}
		else
		{
			ft_lstadd_back(&lst2, new_node);
			lst = lst->next;
		}
	}
	return (lst2);
}
/*
void* ft_fn(void *s)
{
	char *a = (char *)s;
	while (*a)
	{
		*a = toupper((int)*a);
		a++;
	}
	return s;
	
}

int main() {
	t_list	*new = ft_lstnew("hola");
	t_list	*lst = ft_lstnew("manzana");
	t_list	*lst2 = ft_lstnew("uva");
	t_list	*lst3 = ft_lstnew("fresa");
	t_list	*lst4 = ft_lstnew("kiwi");

	lst->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	lst4->next = new;
	
	t_list *result = ft_lstmap(lst, ft_fn, free);
	while (result) {
		printf("%s\n", (char *)result->content);
		result = result->next;
	}
	return(0);
}
*/