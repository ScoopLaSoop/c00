/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luproven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:37:10 by luproven          #+#    #+#             */
/*   Updated: 2022/09/12 12:41:57 by luproven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ftpc1(int num)
{
	char	ca;
	char	cb;

	ca = 48;
	cb = 48;
	if (num <= 9)
	{
		cb = 48 + num;
	}
	else
	{
		ca = num / 10;
		cb = (num - (ca * 10) + 48);
		ca = ca + 48;
	}
	write(1, &ca, 1);
	write(1, &cb, 1);
}

void	ftpc2(int a)
{
	if ((a + 1) < 99)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	while1(int a, int b)
{
	while (b > a && a < 99)
	{
		ftpc1(a);
		write(1, " ", 1);
		ftpc1(b);
		ftpc2(a);
		if (b == 99)
		{
			a++;
			b = a + 1;
		}
		else
			b++;
	}
}

void	ft_print_comb2(void)
{
	while1(0, 1);
}
