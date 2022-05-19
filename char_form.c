/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_form.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:56:19 by sesim             #+#    #+#             */
/*   Updated: 2022/05/18 11:47:43 by seongmins        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	form_c(int c)
{
	write(1, &c, 1);
	return (1);
}

int	form_s(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	form_x(unsigned int x, char format)
{
	int	res;
	int	c;

	c = 0;
	res = 0;
	while (x != 0)
	{
		if (x > 16)
			
	}
}
