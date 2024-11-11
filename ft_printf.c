/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:00:46 by ybenchel          #+#    #+#             */
/*   Updated: 2024/11/11 14:55:48 by ybenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_handle_percent(format, args);
		}
		else
		{
			ft_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

// int main()
// {
// 	//bunch of tests for printf
// 	ft_printf("Hello, %s\n", NULL);
// 	ft_printf("Hello, %c\n", 'w');
// 	ft_printf("Hello, %d\n", 42);
// 	ft_printf("Hello, %x\n", 42);
// 	ft_printf("Hello, %X\n", 42);
// 	ft_printf("Hello, %p\n", "world");
// 	ft_printf("Hello, %u\n", 42);
// 	ft_printf("Hello, %i\n", 0x2A);
// 	ft_printf("Hello, %%\n");
// }