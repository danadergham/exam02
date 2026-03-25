int	ft_list_size(t_list *begin_list)
{
    int size = 0;
    t_list *list = begin_list;
    while(list)
    {
        size++;
        list = list -> next;
    }
    return(size);                                                                      
}