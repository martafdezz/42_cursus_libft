/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martafer <martafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 09:23:38 by martafer          #+#    #+#             */
/*   Updated: 2025/10/26 15:25:37 by martafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*mem;
	size_t			i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb != 0 && size > __SIZE_MAX__ / nmemb)
		return (NULL);
	mem = (unsigned char *)malloc(nmemb * size);
	if (!mem)
		return (NULL);
	while (i < (nmemb * size))
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
