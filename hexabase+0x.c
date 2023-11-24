/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexabase+0x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:34:17 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/24 18:26:00 by enschnei         ###   ########.fr       */
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
	
	printf("%s", "0x");
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
		ft_hexa_len(n / 16, c);
	ft_putchar(hexa[n % 16]);
}

int	main() {
	int n;
	ft_hexa_base_p(&n, 'x');
	printf("\n%p\n", &n);
}
