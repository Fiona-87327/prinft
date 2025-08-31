/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyan <jiyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:40:30 by jiyawang          #+#    #+#             */
/*   Updated: 2025/08/31 20:59:02 by jiyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1c;
	const unsigned char	*s2c;
	size_t				i;

	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1c[i] != s2c[i])
			return (s1c[i] - s2c[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char a[10] = "nihao";
	char b[10] = "nikao";
	ft_printf("%d\n", ft_memcmp(a, b, 2));
	ft_printf("%d\n", ft_memcmp(a, b, 5));
}