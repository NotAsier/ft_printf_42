/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:17:11 by aarranz-          #+#    #+#             */
/*   Updated: 2023/07/06 14:08:05 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(unsigned long n)
{
	int	r;

	r = 0;
	r += write(1, "0x", 2);
	r += ft_printf_hex(n, 0);
	return (r);
}