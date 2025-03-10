typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swap;
	t_list *tmp; //puntero al inicio de la lista

	tmp = lst;
	while(lst->next) //recorres hasta el penultimo nodo
	{
		if(((*cmp)(lst->data, lst->next->data)) == 0) //pasamos los datos data y next->data a la funcion
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp; //actualizas los valores ya que la funcion retorna lst
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return(lst);
}


