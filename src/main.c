/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 04:37:59 by sphone            #+#    #+#             */
/*   Updated: 2020/02/23 02:23:44 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			main(int argc, char *argv[])
{
	char	*test;
	int		fd;
	int		i;

	test = NULL;
	if (argc != 2)
		errors(0);
	if ((fd = open(argv[1], O_RDONLY)) < 0)
		errors(1);
	if (!(test = tru(fd, test)))
		errors(1);
	if (!(i = charly(test)))
		errors(1);
	if (i > 26)
		errors(1);
	selection(test, i);
	return (0);
}
