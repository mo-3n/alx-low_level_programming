#include "lists.h"

/**
 * get_nodeint_at_index - This function do something.
 *
 * @head: Argument description.
 * @index: Argument description.
 *
 * Return: return value description.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
  unsigned int i = 0;
  listint_t *temp = head;

  while (temp && i < index)
    {
      temp = temp->next;
      i++;
    }

  return (temp ? temp : NULL);
}
