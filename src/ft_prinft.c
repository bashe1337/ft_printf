/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 17:18:51 by bashe             #+#    #+#             */
/*   Updated: 2020/01/09 21:52:16 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char * restrict format, ...)
{
    va_list		argptr;
    char		*str;
	int			numberOfElement;

	va_start(argptr, format);
	str = (char *)format;
	numberOfElement = 0;
	while (*str != '\0')
    {
		if (*str == '%')
			flag_check(argptr, &numberOfElement, str);
		else
		{
			ft_putchar(*str);
			numberOfElement++;
		}
	}
	va_end(argptr);
	return (0);
}

int main()
{
    ft_printf("bruh");
	

    return (0);
}