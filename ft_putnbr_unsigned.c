/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:29:27 by ybenchel          #+#    #+#             */
/*   Updated: 2024/11/10 14:47:31 by ybenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	if (n > 9)
	{
		if (ft_putnbr_unsigned(n / 10) == -1)
			return (-1);
		if (ft_putchar((n % 10) + '0') == -1)
			return (-1);
	}
	else
	{
		if (ft_putchar(n + '0') == -1)
			return (-1);
	}
	return (0);
}
