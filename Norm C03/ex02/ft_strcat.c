/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:57:10 by samirkha          #+#    #+#             */
/*   Updated: 2022/02/17 11:07:46 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	while (dest[i] != '\0')
	{
		lenght++;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[lenght + i] = src[i];
		i++;
	}
	dest[lenght + i] = src[i];
	return (dest);
}
