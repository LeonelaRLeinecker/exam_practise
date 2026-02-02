void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>
int main()
{
	int a = 3;
	int b = 9;
	printf("a = %d y b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("ahora a = %d, y b = %d\n", a, b);
	return 0;
}
