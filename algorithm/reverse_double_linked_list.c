
// reverse single linked list
GList* g_slist_reverse(GList *list)
{
    GList* prev = NULL;

    while(list)
    {
        GList* next = list->next;
        list->next = prev;
        prev = list;
        list = next;

    }
}


// reverse double linked list
GList* g_dlist_reverse(GList *list)
{
    GList* last = NULL;

    while(list)
    {
        last = list;

        list = last->next;
        last->next = last->prev;
        last->prev = list;
    }
    return last;
}
