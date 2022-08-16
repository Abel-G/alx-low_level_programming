#include "lists.h"
/**
* sum_listint - Calculates the sum of all the data of a listint_t list.
* @head: A pointer to the head of the listint_t list.
* Return: 0 or sum
*/
int sum_listint(listint_t *head)
{
int x = 0;
while (head)
{
x += head->n;
head = head->next;
}
return (x);
}
