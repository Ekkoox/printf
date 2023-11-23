/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:06:09 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/23 18:22:34 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int check_format(char *str, va_list args)
{
	int len;
	
	if (str = 'c')
		return(ft_putchar);
	else if (str = 'd' || 'i')
		return(ft_putnbr);
	else if (str = 's')
		return(ft_putstr);
	else if (str = 'u')
		return(ft_unsigned_putnbr);
	else if (str = 'x' || 'X')
		return(ft_hexa_base);
	else if (str = 'p')
		return();
	else if (str = '%')
		return('%');
	return(1);
}

int ft_prinft(const char *str, ...)
{
	va_list args;
	int i;
	
	va_start(args, str);

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			check_format(str, args);
		else
			ft_putstr(str); 
		i++;	
	}
	va_end(args);
}