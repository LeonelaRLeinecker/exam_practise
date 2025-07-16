int	is_power_2(unsigned int n)
{
	if (n == 0)
		return 0;
	return (n & (n-1)) == 0;
}
#include <stdio.h>
int main()
{
	int n = 2;
	printf("%d", is_power_2(n));
	return 0;
}
