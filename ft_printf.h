/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:06:16 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/28 18:29:52 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int				ft_printf(const char *str, ...);
int				ft_putchar(char c);
int				ft_putstr(const char *str);
int				ft_hexa_base(unsigned int n, char c);
int				check_format(char c, va_list args);
int				ft_hexa_len(int n, char c);
int				ft_putnbr(long int n, int *len);
int				ft_hexa_p(uintptr_t n);
unsigned int	ft_putnbr_unsigned(unsigned int n);
int				ft_hexa_base2(unsigned int n);

#endif

// putchar putnbr  pustsr putexa
