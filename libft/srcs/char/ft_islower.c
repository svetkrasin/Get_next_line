/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 18:53:12 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/06 13:40:36 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"

int		ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}