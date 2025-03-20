#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	int j;

	while(s[i])
	{
		j = 0;
		while(accept[j])
		{
			if(s[i] == accept[j])
				break ; //salimos del bucle
			j++;
		}
		if(!accept[j]) //si no encontramos coincidencia (si es caracter nulo)
			return(i);
		i++;
	}
	return(i);
}

int main()
{
	char *s1 = "hola";
	char *s2 = "aquehol";
	printf("original: %lu\n", strspn(s1, s2));
	printf("mio: %zu\n", ft_strspn(s1, s2));
}
