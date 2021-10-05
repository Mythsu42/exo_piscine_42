/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:18:14 by ktolba            #+#    #+#             */
/*   Updated: 2021/09/13 04:11:50 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a < '7')
	{
		write (1, ",", 1);
	}
}

void	increment_number(char a, char b, char c)
{
	while (a < '7')
	{
		if (c == '9' && b != '8')
		{
			b++;
			c = b + 1;
			putchar(a, b, c);
		}
		else if (b == '8')
		{
			a++;
			b = a + 1;
			c = a + 2;
			putchar(a, b, c);
		}
		else
		{
			c++;
			putchar(a, b, c);
		}
	}	
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '1';
	increment_number(a, b, c);
}
