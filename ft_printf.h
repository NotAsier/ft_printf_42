/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:25:53 by aarranz-          #+#    #+#             */
/*   Updated: 2023/07/13 10:47:31 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "./libft/libft.h"

//ft_printf.c
int		ft_printf(char const *str, ...);
int		ft_starting(char c, va_list lst);

//ft_printf_utils.c
int		ft_printf_char(va_list lst);
int		ft_printf_str(va_list lst);
int		ft_printf_nbr(va_list lst);
int		ft_printf_u_nbr(va_list lst);
//ft_printf_hex.c
int		ft_printf_hex(unsigned long n, int up_low_case);
//ft_prinf_ptr.c
int		ft_printf_ptr(unsigned long n);
//caca
void	ft_printf_putunbr_fd(unsigned int n, int fd);

#endif