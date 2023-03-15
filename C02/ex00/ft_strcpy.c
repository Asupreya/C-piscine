/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:05:39 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/12 10:05:39 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcpy(char	*dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	ch1[] = "Hello World";
	char	ch2[20];

	ft_strcpy(ch2, ch1);
	printf("%s\n ", ft_strcpy(ch2, ch1));
	printf("%s, %s\n",ch1,ch2);
	return (0);
}*/
