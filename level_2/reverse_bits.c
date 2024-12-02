//#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int		i;
	unsigned char	res;

	i = 8; //por cada bit
	res = 0; //se almacena el resultado con los bits invertidos
	while (i > 0)
	{
		res = (res << 1) | (octet & 1); //obtiene el bit menos significativo (derecho)
		octet >>= 1; //desplaza los bits de octet a la derecha para continuar copiando
		i--;
	}
	return (res);
}
/*int main()
{
    unsigned char octet = 179; // 10110011 en binario
    unsigned char swapped = reverse_bits(octet);

    printf("Original: %u (0x%X)\n", octet, octet);
    printf("Swapped: %u (0x%X)\n", swapped, swapped);

    return 0;
}*/