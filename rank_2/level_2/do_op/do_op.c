#include "do_op.h"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int n = atoi(argv[1]);
		char operator = argv[2][0];
		int m = atoi(argv[3]);
		if (operator == '+')
			printf("%d", n + m);
		else if (operator == '-')
			printf("%d", n - m);
		else if (operator == '*')
			printf("%d", n * m);
		else if (operator == '/')
                        printf("%d", n / m);
		else if (operator == '%')
                        printf("%d", n % m);
	}
	printf("\n");
	return 0;
}
