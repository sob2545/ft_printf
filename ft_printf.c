/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:56:58 by sesim             #+#    #+#             */
/*   Updated: 2022/05/17 17:58:49 by seongmins        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	format_checker(va_list *ap, const char format)
{
	int	res;

	res = 0;
	if (format == 'c')
		res += form_c(va_arg(*ap, int));
	else if (format == 's')
		res += form_s(va_arg(*ap, char *));
	else if (format == 'd' || format == 'i')
		res += form_d(va_arg(*ap, int));
	else if (format == 'u')
		res += form_u(va_arg(*ap, unsigned int));
	else if (format == 'p')
		res += form_p((unsigned long long)va_arg(*ap, void *));
	else if (format == 'x')
		res += form_x(va_arg(*ap, unsigned int));
	else if (format == 'X')
		res += form_X(va_arg(*ap, unsigned int));
	else if (format == '%')
		res += write(1, "%", 1);
	return (res);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		res;
	
	va_start(ap, str);
	res = 0;
	while (*str != 0)
	{
		if (*str == '%')
		{
			res += format_checker(&ap, *(str + 1));
			str += 2;
		}
		else
		{
			res += write(1, str, 1);
			str++;
		}
	}
	va_end(ap);
	return (res);
}
