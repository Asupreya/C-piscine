/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:21:15 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/12 13:21:15 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char    ch1[] = "+*Ab@#";
	char    ch2[] = "";
	char    ch3[] = "\n\t\v\f";

	printf("%d\n",ft_str_is_printable(ch1));
	printf("%d\n",ft_str_is_printable(ch2));
	printf("%d\n",ft_str_is_printable(ch3));
	return (0);
}*/
