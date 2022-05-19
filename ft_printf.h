/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:41:11 by sesim             #+#    #+#             */
/*   Updated: 2022/05/17 18:00:28 by seongmins        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *, ...);
int	form_c(int c);
int	form_s(char *s);
int	form_d(int d);
int	form_u(unsigned int u);
int	form_p(unsigned long long p);
int	form_x(unsigned int x);
int	form_X(unsigned int X);

#endif
