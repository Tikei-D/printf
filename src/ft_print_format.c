/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-dana <tel-dana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:01:51 by tel-dana          #+#    #+#             */
/*   Updated: 2022/05/26 17:29:39 by tel-dana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_format(va_list args, char ch, int *ptr)
{
	if (ch == 'c')
		ft_putchar(va_arg(args, int), ptr);
	else if (ch == 's')
		ft_putstr(va_arg(args, char *), ptr);
	else if (ch == 'd' || ch == 'i')
		ft_putnbr(va_arg(args, int), ptr);
	else if (ch == 'u')
		ft_putunsigned(va_arg(args, unsigned int), ptr);
	else if (ch == 'x' || ch == 'X')
		ft_puthex(va_arg(args, unsigned int), ch, ptr);
	else if (ch == 'p')
		ft_putptr(va_arg(args, unsigned long), ptr);
	else if (ch == '%')
		ft_putchar('%', ptr);
}
