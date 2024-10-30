/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:51:14 by milsanch          #+#    #+#             */
/*   Updated: 2024/10/04 15:41:52 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		else
			lst = lst->next;
	}
	return (lst);
}

/*void	ft_free(t_list *lst)
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
	t_list	*lst = ft_lstnew("manzana");
	t_list	*lst2 = ft_lstnew("uva");
	t_list	*lst3 = ft_lstnew("fresa");
	t_list	*lst4 = ft_lstnew("kiwi");

	lst->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	lst4->next = NULL;
	t_list	*result = ft_lstlast(lst);
	printf ("%s\n", (char *)result->content);
	ft_free(lst);
	return (0);
}*/
