/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_player.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:56:32 by marene            #+#    #+#             */
/*   Updated: 2016/12/05 18:16:24 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_ipc.h"

t_player		*new_player(int *pos)
{
	t_player		*ret;

	ret = malloc(sizeof(t_player));
	if (ret != NULL)
	{
		ret->pos[0] = pos[0];
		ret->pos[1] = pos[1];
	}
	return ret;
}
