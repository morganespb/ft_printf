/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <student.42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-12 16:54:42 by marvin            #+#    #+#             */
/*   Updated: 2026-04-12 16:54:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *format, ...);
int ft_print_char(char c);
int ft_print_str(char *s);
int ft_print_nbr(int n);
int ft_print_unsigned(unsigned int n);
int ft_print_hex(unsigned int n, int uppercase);
int ft_print_ptr(void *ptr);
int handle_format(char c, va_list args);

#endif