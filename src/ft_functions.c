/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-dana <tel-dana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:05:57 by tel-dana          #+#    #+#             */
/*   Updated: 2022/05/28 14:48:46 by tel-dana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *ptr)
{
	*ptr += write(1, &c, 1);
}

void	ft_putstr(char *s, int *ptr)
{
	int	i;

	i = 0;
	if (!s)
		*ptr += write(1, "(null)", 6);
	else
	{
		while (s[i])
		{
			*ptr = *ptr + write(1, &s[i], 1);
			i++;
		}
	}
}

void	ft_putnbr(int nb, int *ptr)
{
	if (nb == -2147483648)
	{
		*ptr += write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		*ptr += write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, ptr);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48, ptr);
	}
}

void	ft_putunsigned(unsigned int nb, int *ptr)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, ptr);
		nb = nb % 10;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48, ptr);
}

void	ft_putptr(unsigned long nb, int *ptr)
{
	char	*hex;

	hex = "0123456789abcdef";
	*ptr += write(1, "0x", 2);
	ft_puthex(nb, 'x', ptr);
}
