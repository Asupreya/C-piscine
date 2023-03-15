/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:49:39 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/12 10:49:39 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != '\0' && i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	ch1[] = "Fuck You";
	char	ch2[20];

	ft_strncpy(ch2, ch1, 4);
	printf("%s\n", ft_strncpy(ch2, ch1, 4));
	printf("%s\n", ft_strncpy(ch2, ch1, 10));
	return (0);
}*/
