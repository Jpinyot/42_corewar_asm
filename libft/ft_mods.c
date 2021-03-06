/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mods.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 19:06:10 by jagarcia          #+#    #+#             */
/*   Updated: 2018/07/01 20:03:35 by jagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_mods(char *comm)
{
	int		i;

	i = 5;
	while (i >= 0)
	{
		if (ft_strstr(comm, g_mods[i]) && *g_mods[i])
			return (i + 1);
		i--;
	}
	return (0);
}
