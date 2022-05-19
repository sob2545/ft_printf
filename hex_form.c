/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_form.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:11:40 by sesim             #+#    #+#             */
/*   Updated: 2022/05/19 18:23:18 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hex(unsigned int x, const char format, int *res)
{
	char	*up_hex;
	char	*lw_hex;

	up_hex = "0123456789ABCDEF";
	lw_hex = "0123456789abcdef";
	if (x == 0)
		return ;
	else
	{
		print_hex(x, format, res);
		if (format == 'x')
			write(1, &lw_hex[x % 16], 1);
		else if (format == 'X')
			write(1, &up_hex[x % 16], 1);
		res++;
	}
}

int	form_x(unsigned int x, const char format)
{
	int	res;

	res = 0;
	if (x == 0)
		res += write(1, "0", 1);
	else
		print_hex(x, format, &res);
	return (res);
}
