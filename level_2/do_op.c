#include <stdio.h>
#include <stdlib.h> // atoi

int main(int argc, char **argv)
{
	int result;
	if(argc == 4)
	{
		if(argv[2][0] == '+')
		{
			result = atoi(argv[1]) + atoi(argv[3]);
			printf("%d\n", result);
		}
		else if(argv[2][0] == '-')
                {
                        result = atoi(argv[1]) - atoi(argv[3]);
                        printf("%d\n", result);
                }
		else if(argv[2][0] == '*')
                {
                        result = atoi(argv[1]) * atoi(argv[3]);
                        printf("%d\n", result);
                }
		else if(argv[2][0] == '/')
                {
                        result = atoi(argv[1]) / atoi(argv[3]);
                        printf("%d\n", result);
                }
		else if(argv[2][0] == '%')
                {
                        result = atoi(argv[1]) % atoi(argv[3]);
                        printf("%d\n", result);
                }
	}
	else
		printf("\n");
}
