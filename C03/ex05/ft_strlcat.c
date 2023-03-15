/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:31:19 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/13 17:31:19 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	printf("%d\n ", i);
	return (i);
}

unsigned int	ft_strlcat(char	*dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	l;

	i = 0;
	j = ft_strlen(dest);
	k = ft_strlen(src);
	l = j + k;
	while (src[i] != '\0' && i < (size - j - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (l);
}

/*int	main(void)
{
	char	ch1[] = "Fucked";
	char	ch2[] = "Bitch!!!";

	printf("%d\n ", ft_strlcat(ch1, ch2, 10));
	printf("%s\n", ch1);
	return (0);
}*/
