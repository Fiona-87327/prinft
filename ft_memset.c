/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyan <jiyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 14:14:36 by jiyawang          #+#    #+#             */
/*   Updated: 2025/08/31 21:10:06 by jiyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (n > 0)
	{
		*s1 = (unsigned char)c;
		s1++;
		n--;
	}
	return (s);
}

 int	main(void)
 {
 	char s[10] = "hi,jiyan";
 	ft_printf("%s\n", ft_memset(s, '0', 2));
 	return 0;
 }
