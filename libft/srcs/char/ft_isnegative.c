/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnegative.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 11:36:55 by svet              #+#    #+#             */
/*   Updated: 2020/05/19 11:01:32 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnegative(int c)
{
	return ((c >> (7)) & 0x1);
}
