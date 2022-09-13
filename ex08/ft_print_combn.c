/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luproven <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:49:15 by luproven          #+#    #+#             */
/*   Updated: 2022/09/13 16:02:10 by luproven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	combn_recursif(int n, char *comb, int depth, int start)
{
	if (depth < n)
	{
		comb[depth] = start;
		while (comb[depth] <= '9' - n + depth + 1)
		{
			combn_recursif(n, comb, depth + 1, comb[depth] + 1);
			if (depth == n - 1)
			{
				if (comb[0] < '9' - n + 1)
					write(1, comb, n + 2);
				else
					write(1, comb, n);
			}
			comb[depth]++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	comb[11];

	comb[n] = ',';
	comb[n + 1] = ' ';
	combn_recursif(n, comb, 0, '0');
}
