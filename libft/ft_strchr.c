/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 03:13:35 by hnait             #+#    #+#             */
/*   Updated: 2023/02/06 12:33:04 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	p = (char *)s;
	i = 0;
	if ((char) c == '\0')
	{
		while (p[i] != '\0')
			i++;
		return (&p[i]);
	}
	while (p[i] != '\0')
	{
		if (p[i] == (char) c)
			return (&p[i]);
		i++;
	}
	return (0);
}
