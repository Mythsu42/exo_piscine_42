/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:08:43 by ktolba            #+#    #+#             */
/*   Updated: 2021/09/13 04:15:42 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int number_first_part, int number_second_part)
{
	char	first_number_part_one;
	char	second_number_part_one;
	char	first_number_part_two;
	char	second_number_part_two;

	first_number_part_one = number_first_part / 10 + 48;
	second_number_part_one = number_first_part % 10 + 48;
	first_number_part_two = number_second_part / 10 + 48;
	second_number_part_two = number_second_part % 10 + 48;
	write (1, &first_number_part_one, 1);
	write (1, &second_number_part_one, 1);
	write (1, " ", 1);
	write (1, &first_number_part_two, 1);
	write (1, &second_number_part_two, 1);
	if (number_first_part == 98)
	{
		return ;
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	number_first_part;
	int	number_second_part;

	number_first_part = 0;
	number_second_part = 0;
	while (number_first_part <= 98 )
	{	
		number_second_part = number_first_part + 1;
		while (number_second_part <= 99)
		{
			ft_print_number(number_first_part, number_second_part);
			number_second_part++;
		}
		number_first_part++;
	}
}
