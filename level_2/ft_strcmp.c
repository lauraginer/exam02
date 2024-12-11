//#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] && s2[i])
	{
		if(s1[i] != s2[i])
			return(s1[i] - s2[i]);
		i++;
	}
	return(s1[i] - s2[i]);
}

/*int main()
{
	char *s1;
	char *s2;
	int	result;

	s1 = "holi";
	s2 = "hola";
	result = ft_strcmp(s1, s2);
	printf("Resultado de la comparación: %d\n", result);
	return(0);
}*/

/*La función `ft_strcmp` compara dos cadenas de caracteres (`s1` y `s2`)
carácter por carácter utilizando sus valores ASCII. Si encuentra una diferencia,
devuelve la diferencia entre los caracteres en la posición donde difieren. 
Si no encuentra diferencias y llega al final de una de las cadenas, devuelve la 
diferencia entre los caracteres en la posición actual, lo que también maneja el caso en que una
cadena es un prefijo de la otra. En resumen, `ft_strcmp` devuelve `0` si las cadenas son iguales, 
un valor negativo si `s1` es menor que `s2`, y un valor positivo si `s1` es mayor que `s2`.*/