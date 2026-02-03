#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	octet = (octet >> 4) | (octet << 4);
	return (octet);
}

int main()
{
	unsigned char octet = 0b00111100;
	printf("swap: %u\n", swap_bits(octet));
	return 0;
}
