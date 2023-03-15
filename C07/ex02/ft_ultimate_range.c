/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:38:42 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/20 12:38:42 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
//#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	n;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	n = max - min;
	ptr = (int *)malloc(n * sizeof(int));
	if (ptr == NULL)
	{		
		*range = 0;
		return (-1);
	}
	*range = ptr;
	while (i < n)
	{
		ptr[i] = min + i;
		i++;
	}
	return (n);
}

/*int	main(void)
{
	int	*arr;
	int	i;
	int	min;
	int	max;
	int	range;

	i = 0;
	min = 1;
	max = 100;
	range = ft_ultimate_range(&arr, min, max);
	while (i < range)
	{
		printf("%d, ", *(arr + i));
		i++;
	}
	free(range);
	return (0);
}*/
