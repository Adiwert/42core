/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:40:45 by tstewart          #+#    #+#             */
/*   Updated: 2024/12/04 13:40:45 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			count ;
	unsigned char	*initial_d;
	unsigned char	*initial_s;

	count = 0;
	initial_d = (unsigned char *)dest;
	initial_s = (unsigned char *)src;
	if (src < dest)
	{
		while (count < n)
		{
			initial_d[n - count - 1] = initial_s[n - count - 1];
			count++;
		}
	}
	else if (src > dest)
	{
		while (count < n)
		{
			initial_d[count] = initial_s[count];
			count++;
		}
	}
	return (dest);
}