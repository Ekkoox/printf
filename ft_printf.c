/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:06:09 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/24 18:26:48 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int check_format(char c, va_list args)
{
	int len;
	
	if (c == 'c')
		return(ft_putchar);
	if (c == 'd' || 'i')
		return(ft_putnbr);
	if (c == 's')
		return(ft_putstr);
	if (c == 'u')
		return(ft_unsigned_putnbr);
	if (c == 'x' || 'X')
		return(ft_hexa_base);
	if (c == 'p')
		return();
	if (c == '%')
		return('%');
	return(1);
}

int ft_printf(const char *str, ...)
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

int main()
{
	char *str = "Enzo";

	ft_printf("Je suis %s\n"));
	printf("Je suis %s" putstr(str);
	return(0);

}
