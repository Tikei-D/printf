/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-dana <tel-dana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:57:36 by tel-dana          #+#    #+#             */
/*   Updated: 2022/05/26 17:29:39 by tel-dana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		count;
	int		i;
	va_list	args;

	i = 0;
	va_start(args, s);
	count = 0;
	while (s[i])
	{
		if (s[i] == '%')
			print_format(args, s[++i], &count);
		else
			count += write(1, &s[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
