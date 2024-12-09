//#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return((octet >> 4) | (octet << 4));
}
/*int main()
{
    unsigned char octet = 179; // 10110011 en binario
    unsigned char swapped = swap_bits(octet);

    printf("Original: %u (0x%X)\n", octet, octet);
    printf("Swapped: %u (0x%X)\n", swapped, swapped);

    return 0;
}*/