/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martafer <martafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:56:45 by martafer          #+#    #+#             */
/*   Updated: 2025/10/27 10:27:12 by martafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*res_str;
	size_t		start;
	size_t		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[end]) != NULL && (start < end))
		end--;
	res_str = malloc(((end - start) + 2) * sizeof(char));
	if (!res_str)
		return (NULL);
	ft_memcpy(res_str, &s1[start], (end - start) + 1);
	res_str[(end - start) + 1] = '\0';
	return (res_str);
}
