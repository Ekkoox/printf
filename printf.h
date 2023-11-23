/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:06:16 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/23 18:19:39 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_h
# define PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int ft_prinft(const char *str, ...);
int ft_putchar(char c);
int ft_putstr(char *str);
int	ft_putnbr(int n);
void ft_hexa_base(int n, char c);
int ft_unsigned_putnbr(int n);


#endif

//putchar putnbr  pustsr putexa