#include <unistd.h>

void change(char *str)
{
    int i;

    i = 0;
    while(str[i] && (str[i] == 32 || str[i] == '\t'))
        i++;
    while(str[i])
    {
        if((str[i - 1] == ' ' || str[i - 1] == '\t') && (str[i] >= 33 && str[i] <= 126) && i != 1)
        {
            write(1, " ", 1);
            write(1, " ", 1);
            write(1, " ", 1);
        }
        if(str[i] != ' ' && str[i] != '\t')
            write(1, &str[i], 1);
            i++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 2 && argv[1][0] != '\0')
        change(argv[1]);
    write(1, "\n", 1);
}
