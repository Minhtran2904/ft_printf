/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:25:21 by mitran            #+#    #+#             */
/*   Updated: 2022/11/08 15:25:23 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_ele;

	new_ele = (t_list *)malloc(sizeof(*new_ele));
	if (!new_ele)
	{
		return (NULL);
	}
	new_ele->content = content;
	new_ele->next = NULL;
	return (new_ele);
}
