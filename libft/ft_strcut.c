/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 14:53:02 by anroche           #+#    #+#             */
/*   Updated: 2017/03/05 17:56:12 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strcut(char *src, char **dst1, char **dst2, size_t index)
{
	int i;
	int len;
	
	len = ft_strlen(src);
	i = 0;
	*dst1 = ft_strsub(src, 0, index);
	*dst2 = ft_strsub(src, index, len);
}
