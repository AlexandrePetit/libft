/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_rm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/02 23:59:29 by alexandre         #+#    #+#             */
/*   Updated: 2014/01/03 00:29:45 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../includes/libft.h"

t_dlist	*ft_dlst_rm(t_dlist *dlist, void data)
{
	t_dlist	*temp;
	int		found;

	if (dlist != NULL)
	{
		temp = dlist->head;
		found = 0;
		while (temp != NULL && found == 0)
		{
			if (temp->data)
		}
	}
}