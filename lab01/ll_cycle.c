#include "ll_cycle.h"

#include <stddef.h>

int ll_has_cycle(node* head) {
  if (!head) return 0;
  node *tortoise = head, *hare = head;
  while (hare->next->next) {
    hare = hare->next->next;
    if (!hare->next) return 0;
    tortoise = tortoise->next;
    if (hare == tortoise) return 1;
  }
  return 0;
}