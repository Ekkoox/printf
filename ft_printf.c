/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:06:09 by enschnei          #+#    #+#             */
/*   Updated: 2023/11/27 17:22:40 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// int check_format(char c)
// {
// 	va_list args;
// 	int len;
	
// 	if (c == 'c')
// 		return((int*)ft_putchar);
// 	if (c == 'd' || 'i')
// 		return((int*)ft_putnbr);
// 	if (c == 's')
// 		return((int*)ft_putstr);
// 	if (c == 'u')
// 		return((int*)ft_unsigned_putnbr);
// 	if (c == 'x' || 'X')
// 		return((int*) ft_hexa_base);
// 	if (c == 'p')
// 		return((int*) ft_hexa_base_p);
// 	if (c == '%')
// 		return('%');
// 	return(1);
// }

int	check_format(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(args, int), &len));
	if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
//	if (c == 'x' || c == 'X')
//		return();
//	if (c == 'p')
//		return (ft_hexa_base_p(va_arg(args, void *)));
	if (c == '%')
		return (ft_putchar('%'));
	return (1);
}

int ft_printf(const char *str, ...)
{
	va_list args;
	int i;\
	int len;0
	
	va_start(args, str);

	i = 0;
	if(!str)
		return(-1);
	while (str[i])
	{
		if (str[i] == '%')
			check_format(str[i + 1], args);
		else
			ft_putstr(str); 
		i++;	
	}
	va_end(args);
}

int main()
{
	char *str = "Enzo";

	ft_printf("Je suis %s",str);
	printf("Je suis %s",str);
	return(0);
}
