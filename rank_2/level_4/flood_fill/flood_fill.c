#include "flood_fill.h"

char **make_area(char **zone, t_point size)
{
	char **new;
	new = malloc(sizeof(char *) * size.y);
	int i = 0;
	int j = 0;
	while(i < size.y)
	{
		j = 0;
		new[i]= malloc(size.x + 1);

		while(zone[i][j]) {
			new[i][j] = zone[i][j];
			j++;
		}
		new[i][j] = '\0';
		i++;
	}

	new[i] = NULL;
	return new;
}

void print_area(char **zone, t_point size)
{
	int i = 0;
	while(i < size.y)
	{
		printf("%s\n", zone[i]);
		i++;
	}

}

void fill(char **matrix, t_point size, char target, int row, int col)
{
	if (row < 0 || col < 0 || row >= size.y || col >= size.x)
		return;
	if (matrix[row][col] == 'F' || matrix[row][col] != target) //si ya esta pintado o no es pintable
		return;
	//ya verifique que en la poosicion que estoy hay pintar
	matrix[row][col] = 'F';
	
	//recursividad para comprobar vecinos
	fill(matrix, size, target, row - 1, col); //arriba
	fill(matrix, size, target, row + 1, col); //abajo
	fill(matrix, size, target, row, col - 1); //izq
	fill(matrix, size, target, row, col + 1);//derecha

}



void flood_fill(char **tab, t_point size, t_point begin)
{
	char target = tab[begin.y][begin.x]; //este es mi punto de inicio
	fill(tab, size, target, begin.y, begin.x);
}

int main()
{
	t_point size = {8, 5};
	t_point begin = {0,0};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	print_area(area, size);
	printf("post food_fill\n");
	flood_fill(area, size, begin);
	print_area(area, size);

	printf("\n");
}

