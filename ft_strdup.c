/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martafer <martafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:29:37 by martafer          #+#    #+#             */
/*   Updated: 2025/10/27 10:18:47 by martafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		length;
	int		i;
	char	*str;

	length = 0;
	while (s[length] != '\0')
		length++;
	str = (char *)malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < length)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
