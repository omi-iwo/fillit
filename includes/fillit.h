/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cotis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 19:18:48 by cotis             #+#    #+#             */
/*   Updated: 2020/02/20 22:18:44 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

void	size(int qua, long long *seq, int **figures);
void	swapy(int **temp, int **figure, int qua);
int		testpre(int **pole, int **temp, long long *set, long long *seq);
void	prer(int **pole, int **figures, int qua, long long *seq);
void	soft(int **pole, int **figures, int qua);
void	errors(int i);
void	freefigures(int **figures, int qua);
void	freeall(int **pole, int **figures, int qua, long long *seq);
int		charly(const char *test);
void	preshift(int **figures, int qua);
int		**createplace(int **figures, int qua);
void	place(char *test, int **figures);
long long		*sequencecreate(int qua);
long long		get_num(int input);
int		more(long long *sec, long long *seq, int i, int j);
void	fine(long long *sec, long long *seq, int i, int j);
void	transposition(int **pole, int **figures, int qua, long long *seq);
int		presoft(int **pole, int **figures, int qua, long long *seq);
int		shiftpole(int *onepole, long long size, int *figures);
void	assembly(int **pole, int **figures, int qua, long long *seq);
int		assembly2(int **pole, int **figures, int qua, long long *seq);
void	print(char **ab, int k);
void	ready(int **pole, int qua, int size, long long *seq);
void	selection(char *test, int qua);
char	*tru(int fd, char *tmp);
#endif
