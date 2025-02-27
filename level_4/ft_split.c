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
		if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			start = i;
			k = 0;
			while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') //recorres primera palabra
				i++;
			word = malloc(sizeof(char) * (i - start + 1));
			if(!word)
				return(NULL);
			while(start < i)
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
