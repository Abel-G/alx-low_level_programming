#include "list.h"
/**
* dlistint_len - return the number of elements in dlistint_t list
* @h: head of the list
* Return: number of elements in list
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
