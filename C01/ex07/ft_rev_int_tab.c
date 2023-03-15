/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:31:09 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/11 15:31:09 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}

/*int	main(void)
{
	int	tab[6] = {0, 1, 2, 3, 4, 5};
	int	size;
	int	i;

	size = 6;
	i = 0;
	ft_rev_int_tab(tab, size);
	while (size > 0)
	{
		printf("%d", tab[i]);
		i++;
		size--;
	}
	return (0);
}*/
