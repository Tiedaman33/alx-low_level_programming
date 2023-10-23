#ifndef LISTS_H
#define LISTS_h
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
size_t print_listint(const listint_t *h);
int _putchar(char c);

#endif
