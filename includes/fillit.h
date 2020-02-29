/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 18:23:11 by sphone            #+#    #+#             */
/*   Updated: 2020/02/29 18:26:40 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef enum	e_args
{
	I,
	LAST_I,
	T,
	R,
	N
}				t_args;

void			errors(int i);
void			freefigures(int **figures, int qua);
void			freeall(int **pole, int **figures, int qua, int *seq);
int				charly(const char *test);
void			preshift(int **figures, int qua);
int				**createplace(int qua);
void			place(char *test, int **figures);
int				*sequencecreate();
void			presoft(int **pole, int **figures, int qua, int *seq);
int				shiftpole(int *onepole, int size, int *figures);
void			assembly(int **pole, int **figures, int qua, int *seq);
void			print(char **ab, int k);
void			ready(int **pole, int *seq);
void			selection(char *test, int qua);
char			*tru(int fd, char *tmp);
#endif
