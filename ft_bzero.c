/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyan <jiyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:14:13 by jiyawang          #+#    #+#             */
/*   Updated: 2025/08/31 20:34:18 by jiyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *d, size_t n)
{
	ft_memset(d, 0, n);
}


// #include <string.h>
// int	main(void)
// {
// 	char d[5] = "jjj";  // Änderbar, sicher für bzero
// 	size_t n = 1;

// 	ft_bzero(d, n);

// 	// Ausgabe der ASCII-Werte zur Kontrolle
// 	for (int i = 0; i < 3; i++)
// 		ft_printf("d[%d] = %d\n", i, d[i]);

// 	return 0;
// } 