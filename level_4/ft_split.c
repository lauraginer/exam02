#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k;
	int start;
	char *word;
	char **split = malloc(1000000);

	while(str[i])
	{
		if(str[i] != ' ' || (str[i] < 9 && str[i] > 13))
		{
			start = i; //almacenas el inicio en start
			k = 0;
			while(str[i] && (str[i] != ' ' || (str[i] < 9 && str[i] > 13))) //almacenas la primera palabra en i
				i++;
			word = malloc(sizeof(char) * (i - start + 1)); //guardas espacio para la palabra en sí
			if(!word)
				return(NULL);
			while(start < i) //importnte start como índice, no i (entonces el bucle no tiene sentido, modificas su valor)
				word[k++] = str[start++];
			word[k] = '\0';
			split[j++] = word;
		}
		else
			i++;
	}
	split[j] = NULL; //marcas el final
	return(split);
}

int main() {
    char *str = "Este es un   ejemplo de prueba\ncon varios\tdelimitadores.";
    char **words = ft_split(str);
	int i = 0;

    while (words[i] != NULL) 
	{
        printf("Palabra %d: %s\n", i + 1, words[i]);
        free(words[i]);
		i++;
    }
    free(words);
    return (0);
}
