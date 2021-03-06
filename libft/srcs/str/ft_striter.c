/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svet <svet@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:20:22 by skrasin           #+#    #+#             */
/*   Updated: 2020/05/19 10:18:34 by svet             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_null.h>

void	ft_striter(char *s, void (*f)(char *))
{
	if (f != NULL && s != NULL)
		while (*s != '\0')
			f(s++);
}
