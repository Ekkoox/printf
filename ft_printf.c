/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:06:09 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/28 18:45:17 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c') //ca marche
		return (ft_putchar(va_arg(args, int)));
	if (c == 's') //ca marche
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'i' || c == 'd') //ca marche
		return (ft_putnbr(va_arg(args, int), &len));
	if (c == 'u') // ca marche
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	if (c == 'x' || c == 'X') // ca marche
		return(ft_hexa_base(va_arg(args, unsigned int), c));
	if (c == 'p') // ca marche pas
		return(ft_hexa_p((uintptr_t)va_arg(args, void *)));
	if (c == '%') // ca marche
		return (ft_putchar('%'));
	return (1);
}

int ft_printf(const char *str, ...)
{
	va_list args;
	int i;
	int len;
	
	va_start(args, str);

	i = 0;
	len = 0;
	if(!str)
		return(-1);
	while (str[i])
	{
		if (str[i] == '%')
			len += check_format(str[++i], args);
		else
			len += ft_putchar(str[i]);
		i++;	
	}
	va_end(args);
	return(len);
}

// int main()
// {
// 	char *str = NULL;
	
// 	printf("\n%d\n", ft_printf(" NULL %s NULL ", str));
// //	printf("\n%d\n", printf(" NULL %s NULL ", str));
// 	return(0);
// }
