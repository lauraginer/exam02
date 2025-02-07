#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i;

	i = 0;
	while(s[i] && accept[i])
	{
		if(s[i] != accept[i])
			return(i);
		i++;
	}
	return(i);
}

int main()
{
	int result;
	char *str = "cojones";
	char *s2 = "cojoneklk";

	result = ft_strspn(str, s2);
	printf("result: %d\n", result);
}