/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:06:16 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/27 16:24:39 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);
int				ft_putchar(char c);
int				ft_putstr(const char *str);
int				ft_hexa_base(int n, char c);
int				ft_hexa_base_p(int n, char c);
int				check_format(char c, va_list args);
int				ft_hexa_len(int n, char c);
int				ft_putnbr(int n, int *len);
unsigned int	ft_putnbr_unsigned(int n);

#endif

// putchar putnbr  pustsr putexa
