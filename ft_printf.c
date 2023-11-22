/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:06:09 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/22 18:37:17 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int check_format(const char *str)
{
	if (str = 'c')
		return(ft_putchar);
	else if (str = 'd' || 'i')
		return(ft_putnbr);
	else if (str = 's')
		return(ft_putstr);
	else if (str = 'u')
		return();
	else if (str = 'x')
		return();
	else if (str = 'p')
		return();	
}

int ft_prinft(const char *str, ...)
{
	va_list args;
	int count;
	
	va_start(args, str);
	int i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
			check_format(str);
		else
			ft_putstr(str); 
		i++;	
	}
	va_end(args);
}