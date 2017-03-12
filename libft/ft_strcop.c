/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 17:54:10 by anroche           #+#    #+#             */
/*   Updated: 2017/03/11 12:47:10 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcop(const char *src)
{
	int 	i;
	char 	*dst;

	i = 0;
	dst = ft_strnew(ft_strlen(src) + 1);
	if (src == NULL)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
