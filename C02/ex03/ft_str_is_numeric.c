/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:20:09 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/12 12:20:09 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char    ch1[] = "123456";
	char    ch2[] = "";
	char    ch3[] = "2k4;*>";

	printf("%d\n",ft_str_is_numeric(ch1));
	printf("%d\n",ft_str_is_numeric(ch2));
	printf("%d\n",ft_str_is_numeric(ch3));
	return (0);
}*/
