//#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	unsigned char bit;

	i = 7;
	while(i >= 0)
	{
		bit = (octet >> i) & 1; //Obtenemos el bit en la posición i
		bit += '0'; // Convertimos el bit a su representación de carácter ('0' o '1')
		write(1, &bit, 1);
		i--;
	}
	write(1, "\n", 1);
}
/*int main()
{
    unsigned char octet = 5; // 00000101 en binario
    print_bits(octet);
    return 0;
}*/