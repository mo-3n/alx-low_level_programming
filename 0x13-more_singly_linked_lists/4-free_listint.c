#include "lists.h"

/**
 * free_listint - This function do something.
 *
 * @head: Argument description.
 */
void free_listint(listint_t *head)
{
  listint_t *temp;

  while (head)
    {
      temp = head->next;
      free(head);
      head = temp;
    }
}
