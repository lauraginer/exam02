#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	count;

	count = 0;
	while(*s == *accept && *s && *accept)
	{
		count++;
		s++;
		accept++;
	}
	return(count);
}

int main()
{
	char *s;
	char *s1;
	int result;

	s = "hola cojones";
	s1 = "hola como estas";
	result = ft_strspn(s, s1);
	printf("longitud final:%d\n", result);
	return(0);
}

/*La función `strspn` en C es una función de la biblioteca estándar que se utiliza
para calcular la longitud del segmento inicial de una cadena que consiste únicamente en caracteres
presentes en otra cadena. La función `strspn` examina la cadena `s` desde el principio y cuenta cuántos caracteres consecutivos
pertenecen al conjunto de caracteres especificados en `accept`. La función se detiene cuando encuentra
el primer carácter en `s` que no está en `accept`. Devuelve la longitud del segmento inicial de `s` que
consiste únicamente en caracteres presentes en `accept`.*/
