/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-dana <tel-dana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:10:26 by tel-dana          #+#    #+#             */
/*   Updated: 2022/05/26 17:29:39 by tel-dana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long nb, char ch, int *ptr)
{
	char	*hex;
	char	*hexcap;

	hexcap = "0123456789ABCDEF";
	hex = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_puthex(nb / 16, ch, ptr);
		nb = nb % 16;
	}
	if (ch == 'x' && nb >= 0 && nb <= 16)
		ft_putchar(hex[nb], ptr);
	else if (ch == 'X' && nb >= 0 && nb <= 16)
		ft_putchar(hexcap[nb], ptr);
}
