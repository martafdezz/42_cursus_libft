/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martafer <martafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:13:02 by martafer          #+#    #+#             */
/*   Updated: 2025/10/27 12:18:12 by martafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ls;
	size_t	ld;

	ls = ft_strlen((char *)src);
	ld = 0;
	while (dst[ld] != '\0' && ld < size)
		ld++;
	if (size == ld)
		return (ls + size);
	i = 0;
	while ((ld + i) < size -1 && src[i] != '\0')
	{
		dst[ld + i] = src[i];
		i++;
	}
	if ((ld + i) < size)
		dst[ld + i] = '\0';
	return (ld + ls);
}
