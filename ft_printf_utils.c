/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:05:59 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/27 17:21:28 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(1);
}

int ft_putstr(const char *str)
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


int	ft_putnbr(long int n, int *len)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return(ft_putchar("-2147483648"));
	}
	if (n < 0)
	{
		n = -n;
		*len += ft_putchar('-');
	}
	if (n > 9)
		ft_putnbr(n / 10, len);
	*len += ft_putchar(n % 10 + 48);
	return(len);
}

unsigned int	ft_putnbr_unsigned(int n)	
{	
	int len;
	
	len = 0;
	if (n > 9)
		ft_putnbr_len(n / 10);
	len += ft_putchar(n % 10 + 48);
	return (len);
}