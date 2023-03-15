/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:37:14 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/11 16:37:14 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	sort;

	while (size >= 0)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				sort = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = sort;
			}
			i++;
		}
		size--;
	}
}

/*int	main(void)
{
	int	tab[6] = {5, 4, 2, 3, 1, 6};
	int	size;
	int	i;

	size = 6;
	i = 0;
	ft_sort_int_tab(tab, size);
	while (size > 0)
	{
		printf("%d", tab[i]);
		i++;
		size--;
	}
	return (0);
}*/
