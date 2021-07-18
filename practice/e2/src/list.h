#ifndef __LIST_H__
#define __LIST_H__

typedef struct node {
	int value;
	struct node *next;
} Node;

/*
 * alloc_node()
 *
 * Allocate a node structure on the heap and initialize its value attribute to
 * value. Return the address of the allocation on success, or NULL on failure.
 */
Node *alloc_node(int value);

/*
 * free_node()
 *
 * Free the heap memory allocated for a node structure.
 */
void free_node(Node *node);

/*
 * insert_sorted()
 *
 * Assume that the linked list pointed to by head is in ascending order 
 * according to each node's value attribute. Insert a node into the list while
 * maintaining the sorted order (i.e. find the right spot in the list to perform
 * the insertion). Return the address of the head of the linked list.
 */
Node *insert_sorted(Node *head, Node *node);

/*
 * extract_sublist()
 *
 * Scan the linked list pointed to by head and extract all nodes with value
 * attribute between lowerBound and upperBound (inclusive) into a new linked
 * list. Assume lowerBound < upperBound. The address of the new list should be
 * stored at *extracted. *head should be updated if need be.
 */
void extract_sublist(Node **head, Node **extracted, int lowerBound, int upperBound);

#endif
