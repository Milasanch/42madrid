/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:30:13 by milsanch          #+#    #+#             */
/*   Updated: 2024/10/04 14:51:35 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	if (!lst)
		return (0);
	len = 1;
	while (lst->next != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

/*void    ft_printlst(t_list *lst)
{
    while(lst != NULL)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }
}
void    ft_free(t_list *lst)
{
    t_list  *temp;

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
	
	int		len;
	lst->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	lst4->next = NULL;

	len = ft_lstsize(lst);
	printf("%d\n", len);
	ft_printlst(lst);
	ft_free(lst);
	return (0);
}*/