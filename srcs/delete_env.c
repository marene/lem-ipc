/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 18:10:57 by marene            #+#    #+#             */
/*   Updated: 2016/12/05 18:20:09 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_ipc.h"

void		delete_env(t_env **env)
{
	ssize_t		i;

	if (env != NULL && *env != NULL)
	{
		i = 0;
		while (i < (*env)->players_nb)
		{
			delete_player(&((*env)->players[i]));
			++i;
		}
		free((*env)->players);
		free(*env);
		*env = NULL;
	}
}
