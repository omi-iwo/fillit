/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sphone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 01:45:25 by sphone            #+#    #+#             */
/*   Updated: 2020/02/14 22:40:22 by sphone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	errors(int i)
{
	if (i == 1)
		write(1, "error\n", 6);
	else
		write(1, "usege: ./fillite input_file\n", 28);
	exit(1);
	return ;
}
