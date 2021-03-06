/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetit <apetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 13:21:40 by apetit            #+#    #+#             */
/*   Updated: 2013/11/29 13:31:24 by apetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	char	*p_s;

	if (s && f)
	{
		p_s = s;
		while (*p_s)
		{
			(*f)(p_s);
			++p_s;
		}
	}
}
