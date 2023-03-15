/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:46:35 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/20 11:46:35 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
//#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	n;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	n = max - min;
	ptr = (int *)malloc(n * sizeof(int));
	if (ptr == NULL)
		return (0);
	while (i < n)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	int	*arr;
	int	i;
	int	min;
	int	max;

	i = 0;
	min = 5;
	max = 10;
	arr = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d, ", *(arr + i));
		i++;
	}
	free(arr);
	return (0);
}*/
