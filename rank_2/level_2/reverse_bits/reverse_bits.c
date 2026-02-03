#include <stdio.h>
#include <stdlib.h>
unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char res = 0;
	
	while (i > 0)
	{
		res = (res << 1) | (octet & 1);
		octet >>= 1;
		i--;
	}
	return res;
}

int main(int argc, char *argv[]) 
{
    if (argc != 2) 
    {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1;
    }

    // Convertir el argumento de la línea de comandos a un número
    unsigned char octet = (unsigned char)atoi(argv[1]);

    // Llamar a la función reverse_bits
    unsigned char reversed = reverse_bits(octet);

    // Imprimir el resultado
    printf("Original: %u (binario: ", octet);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (octet >> i) & 1);
    }
    printf(")\n");

    printf("Invertido: %u (binario: ", reversed);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (reversed >> i) & 1);
    }
    printf(")\n");

    return 0;
}
