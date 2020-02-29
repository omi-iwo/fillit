/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cotis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 19:18:48 by cotis             #+#    #+#             */
/*   Updated: 2020/02/29 12:01:01 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

void	errors(int i);
void	freefigures(int **figures, int qua);
void	freeall(int **pole, int **figures, int qua, int *seq);
int		charly(const char *test);
void	preshift(int **figures, int qua);
int		**createplace(int qua);
void	place(char *test, int **figures);
int		*sequencecreate();
void	presoft(int **pole, int **figures, int qua, int *seq);
int		shiftpole(int *onepole, int size, int *figures);
void	assembly(int **pole, int **figures, int qua, int *seq);
void	print(char **ab, int k);
void	ready(int **pole, int *seq);
void	selection(char *test, int qua);
char	*tru(int fd, char *tmp);
#endif
