/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 14:49:28 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/18 22:10:04 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char						**ft_split(char const *s, char c)
{
	return (ft_strsplit(s, c));
}
