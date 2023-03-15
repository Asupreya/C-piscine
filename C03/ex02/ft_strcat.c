/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:25:12 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/13 15:25:12 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char	*dest, char *src)
{
	int	i;
	int	s;

	i = 0;
	s = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[s] = src[i];
		i++;
		s++;
	}
	dest[s] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	ch1[15] = "Fuck ";
	char	ch2[] = "You!";

	printf("%s\n ", ft_strcat(ch1, ch2));
	printf("%d\n", ft_strlen(ch1));
	return (0);
}*/
