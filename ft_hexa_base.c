/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:42:24 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/23 18:58:19 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_hexa_len(int n, char c)	
{
	int	len;
	
	len  = 0;
	if (n > 9)
		len += ft_hexa_base(n / 16, c);
	len += ft_putchar(n % 16);
	return (len);
}

int ft_hexa_base(int n, char c)
{
	char *hexa;
	
	if (c >= 'a' && c <= 'z')
		hexa = "0123456789abcdef";	
	else if (c >= 'A' && c <= 'Z')
		hexa = "0123456789ABCDEF";
	else
		return;
	if (n < 0)
	{
		ft_putchar(n);
		n *= -1;
	}
	if (n >= 16)
		ft_hexa_len(n / 16, c);
	ft_putchar(hexa[n % 16]);
}

void ft_hexa_base_p(int n, char c)
{
	char *hexa;
	
	if (c >= 'a' && c <= 'z')
		hexa = "0x";
	else
		return;
	if (n < 0)
	{
		ft_putchar(n);
		n *= -1;
	}
	if (n >= 16)
		ft_hexa_len(n / 12, c);
	ft_putchar(hexa[n % 12]);
}