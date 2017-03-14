/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 18:41:41 by anroche           #+#    #+#             */
/*   Updated: 2017/03/13 19:14:44 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_check_line(int fd, char **tmp)
{
	char	*ret;
	char	*buf;

	ret = NULL;
	while ((buf = ft_strnew(BUFF_SIZE)) &&
	read(fd, buf, BUFF_SIZE) &&
	!ft_memchr(buf, '\n', BUFF_SIZE))
		ret = ft_strconcat(ret, buf);
	if (ft_memchr(buf, '\n', BUFF_SIZE) != NULL)
		*tmp = ft_strcop(buf);
	return (ret);
}

char	*ft_check_end_buffer(char **tmp)
{
	char	*ret;
	char	*stock;
	int		i;

	stock = NULL;
	i = 0;
	ret = NULL;
	if (tmp != NULL)
	{
		while ((*tmp)[i] != '\n' && (*tmp)[i] != '\n')
			i++;
		ft_strcut(*tmp, &ret, &stock, i);
	}
	*tmp = NULL;
	*tmp = stock;
	ft_putstr("\ntest ret |");
	ft_putstr(ret);
	return (ret);
}

int	get_next_line(const int fd, char **line)
{
	char			*buffer[BUFF_SIZE];
	char			*ret;
	static char		*tmp;
	
	ret = NULL;
	if (read(fd, buffer, 0) == -1 || fd == -1 || !line)
		 return (-1);
	if (tmp)
		ret = ft_strconcat(ret, ft_check_end_buffer(&tmp));
	ft_putstr("|tmp|");
	ft_putstr(tmp);
	ft_putstr("|ret|");
	ft_putstr(ret);
	//	tmp = ;
//	if (!(ft_memchr(tmp, '\n', ft_strlen(tmp))))
	{
		ret = ft_strconcat(ret, ft_check_line(fd, &tmp));
		if (tmp && ft_memchr(tmp, '\n', BUFF_SIZE))
			ret = ft_strconcat(ret, ft_check_end_buffer(&tmp));
		*line = ft_strcop(ret);
	}

	return (((*line)[0] != '\0') ? 1 : 0);
}
