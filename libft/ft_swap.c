/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkerckho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 11:24:26 by pkerckho          #+#    #+#             */
/*   Updated: 2016/01/25 11:24:27 by pkerckho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}