/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:05:36 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/12 13:05:36 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char    ch1[] = "abcdef";
	char    ch2[] = "";
	char    ch3[] = "AbcDeF";

	printf("%d\n",ft_str_is_lowercase(ch1));
	printf("%d\n",ft_str_is_lowercase(ch2));
	printf("%d\n",ft_str_is_lowercase(ch3));
	return (0);
}*/
