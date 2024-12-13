#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return(i);
}

/*int main ()
{
	char *s1;
	char *s2;
	int result;

	s1 = "como estas?";
	s2 = "?";
	result = ft_strcspn(s1, s2);
	printf("la longitud resultante es: %d\n", result);
	return (0);
}*/

/*La función `ft_strcspn` calcula la longitud del segmento inicial de la cadena `s1`
que no contiene ningún carácter de la cadena `s2`. Itera sobre cada carácter de `s1` y,
para cada carácter, verifica si está presente en `s2`. Si encuentra un carácter de `s1`
que está en `s2`, devuelve la posición de ese carácter en `s1`. Si no encuentra ningún carácter
de `s1` en `s2`, devuelve la longitud total del segmento inicial de `s1` que no contiene caracteres de `s2`.
En resumen, `ft_strcspn` devuelve la longitud del segmento inicial de `s1` que no contiene ningún carácter de `s2`.*/