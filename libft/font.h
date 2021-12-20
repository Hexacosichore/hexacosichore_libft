/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   font.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:58:20 by gchanet           #+#    #+#             */
/*   Updated: 2021/12/08 14:35:45 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FONT_H
# define FONT_H

typedef enum e_ftstyle
{
	REGULAR = 0,
	BOLD = 1,
	LIGHT = 2,
	UNDERLINE = 4,
	BLINK = 5,
	REVERSE = 7,
	HIDDEN = 8
}			t_ftstyle;

typedef enum e_ftcolor
{
	BLACK = 30,
	RED = 31,
	GREEN = 32,
	YELLOW = 33,
	BLUE = 34,
	PURPLE = 35,
	CYAN = 36,
	WHITE = 37,
	RST = 0
}			t_ftcolor;

#endif