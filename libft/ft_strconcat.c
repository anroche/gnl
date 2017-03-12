/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 14:33:14 by anroche           #+#    #+#             */
/*   Updated: 2017/03/04 18:19:01 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strconcat(char const *s1, char const *s2)
{
	char	*ret;

	ret = NULL;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		ret = ft_strcop(s2);
	if (s2 == NULL)
		ret = ft_strcop(s1);	
	if (s1 != NULL && s2 != NULL)
		ret = ft_strjoin(s1, s2);
	return (ret);
}
