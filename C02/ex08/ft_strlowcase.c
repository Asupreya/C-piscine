/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:25:23 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/12 15:25:23 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char    ch1[] = "abcdef";
	char    ch2[] = "GHIJKL";
	char    ch3[] = "mNoPqR";

	printf("%s\n",ft_strlowcase(ch1));
	printf("%s\n",ft_strlowcase(ch2));
	printf("%s\n",ft_strlowcase(ch3));
	return (0);
}*/
