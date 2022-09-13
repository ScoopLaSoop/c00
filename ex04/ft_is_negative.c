/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luproven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:48:32 by luproven          #+#    #+#             */
/*   Updated: 2022/09/13 16:09:20 by luproven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n < '0')
	{
		c = 'N';
	}
	else
	{
		c = 'P';
	}
	write(1, &c, 1);
}