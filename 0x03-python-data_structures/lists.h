#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct listint_s - Singly linked list
 * @a: integer
 * @next: next code
 *
 * Description: singly linked list format
 */
typedef struct listint_s
{
	int a;
	struct listint_s *next;
}listint_t

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
int is_palindrome(listint_t **head);


#endif
