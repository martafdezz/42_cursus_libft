/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martafer <martafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:17:35 by martafer          #+#    #+#             */
/*   Updated: 2025/10/27 09:48:01 by martafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	tmp;
	size_t	i;

	i = 0;
	if (src > dest)
	{
		while (i < n)
		{
			tmp = ((char *)src)[i];
			((char *)dest)[i] = tmp;
			i++;
		}
	}
	else if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			((char *)dest)[i - 1] = ((char *)src)[i - 1];
			i--;
		}
	}
	return ((void *)dest);
}
