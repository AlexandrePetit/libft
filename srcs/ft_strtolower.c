/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/04 13:38:49 by alex              #+#    #+#             */
/*   Updated: 2014/02/05 14:17:31 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

char	*ft_strtolower(char *str)
{
	char	*lower_str;
	int		i;

	i = 0;
	lower_str = NULL;
	if (str)
	{
		while (str[i])
			++i;
		lower_str = malloc((i + 1) * sizeof(char));
		if (lower_str == NULL)
			return (NULL);
		i = 0;
		while (str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				lower_str[i] = 'a' + (str[i] - 'A');
			else
				lower_str[i] = str[i];
			++i;
		}
		lower_str[i] = 0;
	}
	return (lower_str);
}
