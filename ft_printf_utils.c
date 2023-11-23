/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:05:59 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/23 18:06:43 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(1);
}

int ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

static int	ft_putnbr_len(int n)	
{
	int	len;
	
	len  = 0;
	if (n > 9)
		len += ft_putnbr(n / 10);
	len += ft_putchar(n % 10 + 48);
	return (len);
}

int	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return(ft_putstr(-2147483648));
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		ft_putnbr_len(n / 10);
	ft_putchar(n % 10 + 48);
}

int ft_unsigned_putnbr(int n)
{
	if (n > 0)
		ft_putnbr_len(n / 10);
	ft_putchar(n % 10 + 48);
}