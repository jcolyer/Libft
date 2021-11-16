/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcolyer <jcolyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:31:23 by jcolyer           #+#    #+#             */
/*   Updated: 2021/11/10 15:05:00 by jcolyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static in	ft_abs(int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

void	ft_putnbr_fd(int n, int fd)
{
	char  str[13];
	int   is_neg;;
	int   length;

	is_neg = (n < 0);
	ft_bzero (str, 13);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] = '0' + ft_abs(n % 10);
		n = (n /10);
	}
	if (is_neg)
		str[length] = '-';
	else if (length > 0)
		length--;
	while (length >= 0)
		write(fd, &str[length--], 1);
}
