/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr_base_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 15:52:33 by svet              #+#    #+#             */
/*   Updated: 2020/05/19 11:03:03 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include "ft_io.h"
#include <sys/_types/_size_t.h>

void	ft_putlnbr_base_fd(long n, int base, int isupper, int fd)
{
	char		s[22];
	size_t		len;
	long		rem;
	const long	sign = n < 0 ? -1L : 1L;
	const char	a = isupper == 1 ? 'A' : 'a';

	if (base < 2 || base > 36)
		return (ft_putchar_fd('\0', fd));
	len = ft_num_of_digs(n, base);
	s[0] = (n < 0) ? '-' : '0';
	s[len] = '\0';
	while (n != 0)
	{
		rem = n % base * sign;
		s[--len] = rem > 9 ? rem - 10 + a : rem + '0';
		n /= base;
	}
	ft_putstr_fd(s, fd);
}
