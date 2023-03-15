/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:45:02 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/11 13:45:02 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	if (*b != 0)
	{
		c = *a;
		*a = *a / *b;
		*b = c % *b;
	}
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 157;
	b = 21;
	ft_ultimate_div_mod(&a, &b);
	printf("%d and %d", a, b);
	return (0);
}*/
