/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:21:52 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/08 11:17:37 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	gnl_read(char **buff_s, char **line, int fd, int bli)
{
	char	buff[32 + 1];
	int		ret;

	ft_strdupcat(line, *buff_s);
	while (ft_strichr(*line, '\n') == -1)
	{
		ret = read(fd, buff, 32);
		if (ret <= 0)
		{
			if (buff_s)
				free(*buff_s);
			*buff_s = NULL;
			return (*line && (*line)[0] != '\0');
		}
		buff[ret] = '\0';
		ft_strdupcat(line, buff);
	}
	bli = ft_strichr(*line, '\n');
	if (bli >= 0)
	{
		ft_strdel(buff_s);
		ft_strdupcat(buff_s, &(*line)[bli + 1]);
		(*line)[bli + 1] = '\0';
	}
	return (1);
}

char	*get_next_line(int fd)
{
	static char		*data[42];
	char			*line;

	line = NULL;
	if (fd < 32 && fd >= 0 && !gnl_read(&(data[fd]), &line, fd, 0))
	{
		free(line);
		line = NULL;
	}
	return (line);
}
