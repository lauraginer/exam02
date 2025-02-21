char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k;
	int start = 0;
	char *word;
	char **split = malloc(1000000);

	while(str[i])
	{
		if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			start = i;
			k = 0;
		}
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
