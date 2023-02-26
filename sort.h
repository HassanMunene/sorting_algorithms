#ifndef SORT_H_
#define SORT_H_

#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: integer stored in the node
 * @prev: pointer to the previous element of the list
 * @next: pointer to the next element of the list
 *
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* FUNCTIONS DECLARATIONS*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void swap(int a, int b);
void print_list(const listint_t *list);
void print_array(const int* array, size_t size);

#endif
