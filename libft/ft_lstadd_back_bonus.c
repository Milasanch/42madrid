/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:52:26 by milsanch          #+#    #+#             */
/*   Updated: 2024/10/08 21:56:52 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (*lst != NULL)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

/*static int	ft_printlst(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

static void	ft_free(t_list *lst)
{
	t_list	*temp;

	while (lst != NULL)
	{
		temp = lst;
		lst = lst->next;
		free(temp);
	}
}

int	main(void)
{
	t_list	*new = ft_lstnew("hola");
	t_list	*lst = ft_lstnew("manzana");
	t_list	*lst2 = ft_lstnew("uva");
	t_list	*lst3 = ft_lstnew("fresa");
	t_list	*lst4 = ft_lstnew("kiwi");

	lst->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	lst4->next = NULL;
	ft_lstadd_back(&lst, new);
	ft_printlst(lst);
	ft_free(lst);
	return (0);
}*/
