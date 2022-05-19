/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_form.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:34:47 by sesim             #+#    #+#             */
/*   Updated: 2022/05/19 17:18:40 by sesim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

int	form_p(uintptr_t p)
{
	int	res;

	res = write(1, "0x", 2);
	if (p == 0)
		res += write(1, "0", 1);
	else
		res += form_x(p, 'x');
	return (res);
}
