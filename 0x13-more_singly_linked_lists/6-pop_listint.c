#include "lists.h"
/**
* pop_listint - Deletes the head node of a listint_t list.
* @head: A pointer to the address of the head of the listint_t list.
* Return: 0 or head node
*/
int pop_listint(listint_t **head)
{
listint_t *tmp;
int r;
if (*head == NULL)
return (0);
t = *head;
r = (*head)->n;
*head = (*head)->next;
free(t);
return (r);
}
