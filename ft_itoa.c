/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martafer <martafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 08:15:16 by martafer          #+#    #+#             */
/*   Updated: 2025/10/27 14:09:17 by martafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		counter = 1;
	if (n < 0)
	{
		counter++;
	}
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

static char	*ft_intmin(void)
{
	char	*str;

	str = malloc(12 * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str_n;
	int		len;

	if (n == -2147483648)
		return (ft_intmin());
	str_n = "";
	len = ft_digit_count(n);
	str_n = malloc((len + 1) * sizeof(char));
	if (!str_n)
		return (NULL);
	str_n[len] = '\0';
	if (n < 0)
	{
		str_n[0] = '-';
		n = -n;
	}
	if (n == 0)
		str_n[0] = '0';
	while (n > 0)
	{
		len--;
		str_n[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str_n);
}
