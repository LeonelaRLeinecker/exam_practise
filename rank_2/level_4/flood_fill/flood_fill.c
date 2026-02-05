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



/*void flood_fill(char **tab, t_point size, t_point begin);
{

}*/

int main() {
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	print_area(area, size);
	printf("\n");
}

