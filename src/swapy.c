#include "fillit.h"

void	swapy(int **temp, int **figure, int quantity)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < quantity)
	{
		while (i < 8)
		{
			temp[j][i] = figure[j][i];
			i++;
		}
		i = 0;
		j++;
	}
	return ;
}