/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cotis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 19:18:48 by cotis             #+#    #+#             */
/*   Updated: 2020/02/06 17:31:04 by olegolszewski    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

void		swapy(int **temp, int **figure, int quantity);
int			testpre(int **pole, int **temp, int *seq, int *sequence);
void		prer(int **pole, int **figures, int quantity, int *sequence);
void        preshiftback(int **figures, int quantity, int size);
void        soft(int **pole, int **figures, int quantity);
void        errors(int i);
void        freefigures(int **figures, int quantity);
void        freeall(int **pole, int **figures, int quantity, int *sequence);
int         charly(const char *test);
void        preshift(int **figures, int quantity);
int         **createplace(int **figures, int quantity);
void        place(char *test, int **figures);
int         *sequencecreate(int quantity, int *sequence);
int         *sequencecreate2(int quantity, int *sequence, int j);
void        sequencecreate3(int quantity, int *sequence);
int         get_num(int input);
int         more(int *sec, int *sequence, int i, int j);
void        fine(int *sec, int *sequence, int i, int j);
void        transposition(int **pole, int **figures, int quantity, int *sequence);
void        transposition2(int **pole, int **figures, int quantity, int *sequence);
int         presoft(int **pole, int **figures, int quantity, int *sequence);
int         presoft2(int **pole, int **figures, int quantity, int *sequence);
int         presoft3(int **pole, int **figures, int quantity, int *sequence);
int         presoftback(int **pole, int **figures, int quantity, int *sequence);
int         presoftback2(int **pole, int **figures, int quantity, int *sequence);
int         shiftpoleback(int *onepole, int *figures);
int         shiftpole(int *onepole, int size, int *figures);
void        assembly(int **pole, int **figures, int quantity, int *sequence);
int         assembly2(int **pole, int **figures, int quantity, int *sequence);
void        assembly3(int **pole, int **figures, int quantity, int *sequence);
int         assemblyback(int **pole, int **figures, int quantity, int *sequence);
int         assemblyback2(int **pole, int **figures, int quantity, int *sequence);
void        print(char **ab, int k);
void        ready(int **pole, int quantity, int size, int *sequence);
void        selection(char *test, int quantity);
char        *tru(int fd, char *tmp);
#endif
