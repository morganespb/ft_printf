/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <student.42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-12 19:14:45 by marvin            #+#    #+#             */
/*   Updated: 2026-04-12 19:14:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	int		a;
	int		b;
	char	*str;
	char	*null_str;

	str = "hello";
	null_str = NULL;

	printf("=============== CHAR ===============\n");
	a = printf("printf    : [%c]\n", 'A');
	b = ft_printf("ft_printf : [%c]\n", 'A');
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%c] [%c] [%c]\n", '0', ' ', 'Z');
	b = ft_printf("ft_printf : [%c] [%c] [%c]\n", '0', ' ', 'Z');
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	printf("=============== STRING ===============\n");
	a = printf("printf    : [%s]\n", str);
	b = ft_printf("ft_printf : [%s]\n", str);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%s]\n", "");
	b = ft_printf("ft_printf : [%s]\n", "");
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%s]\n", null_str);
	b = ft_printf("ft_printf : [%s]\n", null_str);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	printf("=============== DECIMAL / INTEGER ===============\n");
	a = printf("printf    : [%d] [%i]\n", 42, 42);
	b = ft_printf("ft_printf : [%d] [%i]\n", 42, 42);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%d] [%i]\n", -42, -42);
	b = ft_printf("ft_printf : [%d] [%i]\n", -42, -42);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%d] [%i]\n", 0, 0);
	b = ft_printf("ft_printf : [%d] [%i]\n", 0, 0);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%d] [%i]\n", INT_MAX, INT_MIN);
	b = ft_printf("ft_printf : [%d] [%i]\n", INT_MAX, INT_MIN);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	printf("=============== UNSIGNED ===============\n");
	a = printf("printf    : [%u]\n", 42U);
	b = ft_printf("ft_printf : [%u]\n", 42U);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%u]\n", 0U);
	b = ft_printf("ft_printf : [%u]\n", 0U);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%u]\n", UINT_MAX);
	b = ft_printf("ft_printf : [%u]\n", UINT_MAX);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%u]\n", -1);
	b = ft_printf("ft_printf : [%u]\n", -1);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	printf("=============== HEX LOWER ===============\n");
	a = printf("printf    : [%x]\n", 42);
	b = ft_printf("ft_printf : [%x]\n", 42);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%x]\n", 0);
	b = ft_printf("ft_printf : [%x]\n", 0);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%x]\n", 255);
	b = ft_printf("ft_printf : [%x]\n", 255);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%x]\n", UINT_MAX);
	b = ft_printf("ft_printf : [%x]\n", UINT_MAX);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	printf("=============== HEX UPPER ===============\n");
	a = printf("printf    : [%X]\n", 42);
	b = ft_printf("ft_printf : [%X]\n", 42);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%X]\n", 0);
	b = ft_printf("ft_printf : [%X]\n", 0);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%X]\n", 255);
	b = ft_printf("ft_printf : [%X]\n", 255);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%X]\n", UINT_MAX);
	b = ft_printf("ft_printf : [%X]\n", UINT_MAX);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	printf("=============== POINTER ===============\n");
	a = printf("printf    : [%p]\n", &a);
	b = ft_printf("ft_printf : [%p]\n", &a);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%p]\n", str);
	b = ft_printf("ft_printf : [%p]\n", str);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%p]\n", NULL);
	b = ft_printf("ft_printf : [%p]\n", NULL);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	printf("=============== PERCENT ===============\n");
	a = printf("printf    : [%%]\n");
	b = ft_printf("ft_printf : [%%]\n");
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%%%%%%]\n");
	b = ft_printf("ft_printf : [%%%%%%]\n");
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	printf("=============== MIXED TESTS ===============\n");
	a = printf("printf    : char=%c str=%s dec=%d int=%i uns=%u hex=%x HEX=%X ptr=%p percent=%%\n", 'Q', "test", -42, 42, 42, 255, 255, &b);
	b = ft_printf("ft_printf : char=%c str=%s dec=%d int=%i uns=%u hex=%x HEX=%X ptr=%p percent=%%\n", 'Q', "test", -42, 42, 42, 255, 255, &b);
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("printf    : [%s] [%d] [%u] [%x] [%X] [%c] [%%]\n", (char *)NULL, INT_MIN, -1, 0, UINT_MAX, 'Z');
	b = ft_printf("ft_printf : [%s] [%d] [%u] [%x] [%X] [%c] [%%]\n", NULL, INT_MIN, -1, 0, UINT_MAX, 'Z');
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	printf("=============== EDGE CHAOS ===============\n");
	a = printf("printf    : %d %d %d %u %u %x %X %s %c %%\n", 0, INT_MIN, INT_MAX, 0, UINT_MAX, 0, UINT_MAX, (char *)NULL, '!');
	b = ft_printf("ft_printf : %d %d %d %u %u %x %X %s %c %%\n", 0, INT_MIN, INT_MAX, 0, UINT_MAX, 0, UINT_MAX, NULL, '!');
	printf("return    : printf=%d | ft_printf=%d\n\n", a, b);

	return (0);
}