/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:13:09 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/12 13:13:09 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char    ch1[] = "ABCDEF";
	char    ch2[] = "";
	char    ch3[] = "AbcDeF";

	printf("%d\n",ft_str_is_uppercase(ch1));
	printf("%d\n",ft_str_is_uppercase(ch2));
	printf("%d\n",ft_str_is_uppercase(ch3));
	return (0);
}*/
