/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:53:00 by samirkha          #+#    #+#             */
/*   Updated: 2022/02/12 09:16:29 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	bajak;

	index = 0;
	while (index < (size / 2))
	{
		bajak = tab [index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = bajak;
		index++;
	}
}
