#include "lists.h"

/**
 * add_nodeint - This function do something.
 *
 * @head: Argument description.
 * @n: Argument description.
 *
 * Return: return value description.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
  listint_t *new;

  new = malloc(sizeof(listint_t));
  if (!new)
    return (NULL);

  new->n = n;
  new->next = *head;
  *head = new;

  return (new);
}
