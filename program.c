typedef struct store
{
    char item[25];
    int price;
    struct store *next;
} store;
store *head;
int scount;
int sprice;
char sitem[25];

void printstoreDetails(store *head)
{
    if (head == NULL)
    {
        printf("store list is empty");
    }
    else
    {
        store *ptr = head;
        printf("no of item in store %d,scount");
        printf("\n store item list head address %d", head);
        while (ptr != NULL)
        {
            printf("\nitem:%s->", ptr->item);
            printf("price:%d->", ptr->price);
            ptr = ptr->next;
            printf("next store ptr address->%d", ptr);
        }
    }
}
