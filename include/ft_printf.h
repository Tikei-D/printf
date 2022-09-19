/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-dana <tel-dana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:55:34 by tel-dana          #+#    #+#             */
/*   Updated: 2022/05/26 17:15:56 by tel-dana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_putchar(char c, int *ptr);
void	ft_putstr(char *s, int *ptr);
void	ft_putnbr(int nb, int *ptr);
void	ft_putunsigned(unsigned int nb, int *ptr);
void	ft_puthex(unsigned long nb, char ch, int *ptr);
void	ft_putptr(unsigned long nb, int *ptr);
void	print_format(va_list args, char ch, int *ptr);
int		ft_printf(const char *str, ...);

#endif