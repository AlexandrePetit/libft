/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_double_sp.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/04 13:56:35 by alex              #+#    #+#             */
/*   Updated: 2014/05/18 15:52:42 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

static int	new_len(char *str)
{
	int		i;
	int		new_len;

	i = 1;
	new_len = 0;
	while (str[i])
	{
		if (ft_isspace(str[i - 1]) == 1 && ft_isspace(str[i]) == 1)
			++i;
		else
		{
			++new_len;
			++i;
		}
	}
	return (new_len);
}

char		*ft_strdel_double_sp(char *str)
{
	int		i;
	int		j;
	char	*new_str;

	if (!str)
		return (NULL);
	if (ft_strlen(str) == 1)
		return (str);
	new_str = malloc((new_len(str) + 2) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	ft_bzero(new_str, 0);
	while (str[++i])
	{
		if (!(str[i + 1] != 0 && ft_isspace(str[i]) == 1
			&& ft_isspace(str[i] + 1) == 1))
		{
			new_str[j] = str[i];
			++j;
		}
	}
	new_str[j] = 0;
	return (new_str);
}
