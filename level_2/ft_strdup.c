#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str) //necesario para la reserva de memoria
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}
char    *ft_strdup(char *src) //reservas memoria con malloc y despues haces un ft_strcpy literalmente
{
	char *dest = malloc(sizeof(char)* (ft_strlen(src) + 1));
	if(!dest)
		return(NULL);

	int j = 0;
	while(src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return(dest);
}
int main()
{
	char *str;
	int len;
	char *copy;

	str = "buonasera";
	len = ft_strlen(str);
	copy = ft_strdup(str);
	printf("len of str: %d\n", len);
	printf("the result of ft_strdup: %s\n", copy);
}


/*La función strdup en C es una función de la biblioteca estándar que se utiliza para duplicar una cadena.
La función strdup primero determina la longitud de la cadena s y luego utiliza malloc para asignar suficiente memoria
para almacenar una copia de la cadena, incluyendo el carácter nulo ('\0') al final. Copia el contenido de la cadena s
en la nueva área de memoria asignada y devuelve un puntero a la nueva cadena duplicada, si falla, devuelve NULL.*/