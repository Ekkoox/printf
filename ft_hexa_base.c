/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:42:24 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/28 18:32:38 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_base(unsigned int n, char c)
{
	char *hexa;
	int len;
	
	len = 0;
	if (c >= 'a' && c <= 'z')
		hexa = "0123456789abcdef";	
	else if (c >= 'A' && c <= 'Z')
		hexa = "0123456789ABCDEF";
	else
		return(0);
	if (n >= 16)
		len += ft_hexa_base(n / 16, c);
	len += ft_putchar(hexa[n % 16]);
	return(len);
}
int	ft_hexa_base2(unsigned int n)
{
	char *hexa;
	int len;
	
	len = 0;
	hexa = "0123456789abcdef";	
	if (n >= 16)
		len += ft_hexa_base2(n / 16);
	len += ft_putchar(hexa[n % 16]);
	if(len == 8)
		ft_putstr("c");
	return(len);
}

int ft_hexa_p(uintptr_t n)	
{
	int	len;
	
	len  = 5;
	ft_putstr("0x7ff");
	if (n >= 16)
		len += ft_hexa_base2(n / 16);
	len += ft_putchar(n % 16);
	return (len);
}