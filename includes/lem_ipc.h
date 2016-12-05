/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-ipc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:47:48 by marene            #+#    #+#             */
/*   Updated: 2016/12/05 18:19:51 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IPC_H
# define LEM_IPC_H

# include <stdlib.h>
# include <pthread.h>
# include "libft.h"

typedef struct		s_player
{
	pthread_t		thread_id;
	int				pos[2];
}					t_player;

typedef struct		s_env
{
	t_player	**players;
	ssize_t		players_nb;
}					t_env;

t_player			*new_player(int *pos);
t_env				*new_env(int argc, char **argv);
void				delete_player(t_player **player);
void				delete_env(t_env **env);

#endif
