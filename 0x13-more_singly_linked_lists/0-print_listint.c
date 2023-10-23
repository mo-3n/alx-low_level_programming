#include "lists.h"

/**
 * print_listint - This function do something.
 *
 * @h: Argument description.
 *
 * Return: return value description.
 */
size_t print_listint(const listint_t *h)
{
  size_t num = 0;

  while (h)
    {
      printf("%d\n", h->n);
      num++;
      h = h->next;
    }

  return (num);
}
