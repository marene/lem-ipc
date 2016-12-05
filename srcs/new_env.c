/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:59:39 by marene            #+#    #+#             */
/*   Updated: 2016/12/05 18:27:10 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_ipc.h"

t_env	*new_env(int argc, char **argv)
{
	t_env		*ret;
	ssize_t		players_nb;

	(void)(argc);
	players_nb = ft_atoi(argv[1]);
	if (players_nb < 2)
		ft_putendl_fd("Invalid number of player (must be at least two players)", 2);
	ret = malloc(sizeof(t_env));
	if (ret != NULL)
	{
		ret->players = malloc((players_nb + 1) * sizeof(t_player*));
		ret->players_nb = players_nb;
		if (ret->players == NULL)
		{
			free(ret);
			ret = NULL;
		}
	}
	return (ret);
}
