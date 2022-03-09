/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:20:18 by samirkha          #+#    #+#             */
/*   Updated: 2022/02/12 11:17:41 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	bajak;
	int	poqri_index;
	int	k;

	index = 0;
	poqri_index = 0;
	while (index < size)
	{
		k = index + 1;
		bajak = tab[index];
		poqri_index = index;
		while (k < size)
		{
			if (tab[k] < tab[poqri_index])
			{
				poqri_index = k;
			}
			k++;
		}	
		tab[index] = tab[poqri_index];
		tab[poqri_index] = bajak;
		index++;
	}
}
