/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:22:19 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/18 15:52:54 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *str, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strdup(char *src)
{
	char	*str;

	str = (char *)malloc(sizeof(src));
	if (!str)
		return (0);
	ft_strcpy(str, src);
	return (ft_strcpy(str, src));
}

int	main(void)
{
	char	s[] ="Hell Kitchen";
	char	*str;
	
	str = ft_strdup(s);
	printf("%s\n", str);
	printf("%lu\n", sizeof(s));
	printf("%d\n", ft_strlen(s));
	return (0);
}
