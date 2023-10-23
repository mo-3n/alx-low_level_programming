#include "lists.h"

/**
 * listint_len - This function do something.
 *
 * @h: Argument description.
 *
 * Return: return value description.
 */
size_t listint_len(const listint_t *h)
{
  size_t num = 0;

  while (h)
    {
      num++;
      h = h->next;
    }

  return (num);
}
