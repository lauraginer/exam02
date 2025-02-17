#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next; //puntero al siguiente nodo
    void          *data; //dato almacenado
}                 t_list;

int     ft_list_size(t_list *begin_list)
{
        int size;

        size = 0;
        while(begin_list)
        {
                begin_list = begin_list->next; //la lista avanza al siguiente nodo(next)
                size++; //iteras cada vez que avanzas de nodo
        }
        return(size);
}

/*int main()
{
    t_list node3 = {NULL, "node3"};
    t_list node2 = {&node3, "node2"};
    t_list node1 = {&node2, "node1"};
    t_list *begin_list = &node1;

    int size = ft_list_size(begin_list);
    printf("List size: %d\n", size);

    return(0);
}*/