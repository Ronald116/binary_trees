#include "binary_trees.h"

/**
 * create_queue - function to store the node
 *
 *
 * return: queue
*/

queue_t *create_queue()
{
	queue_t *queue = malloc(sizeof(queue_t));

	queue->front = NULL;
	queue->rear = NULL;
	return (queue);
}




/**
 * enqueue - function to add root node to queue
 * @queue: queue
 * @node: pointer
 * return: always success
*/

void enqueue(queue_t *queue, binary_tree_t *node)
{
	queue_node_t *new_node = malloc(sizeof(queue_node_t));

	new_node->node = node;
	new_node->next = NULL;

	if (queue->rear == NULL)
	{
		queue->front = new_node;
		queue->rear = new_node;
	}
	else
	{
		queue->rear->next = new_node;
		queue->rear = new_node;
	}
}




/**
 * dequeue - function use to remove and return the front node of a queue.
 * @queue: pointer
 *
 * return: always sucess
*/

binary_tree_t *dequeue(queue_t *queue)
{
	if (queue->front == NULL)
		return (NULL);

	binary_tree_t *node = queue->front->node;
	queue_node_t *temp = queue->front;

	queue->front = queue->front->next;
	free(temp);

	if (queue->front == NULL)
		queue->rear = NULL;

	return (node);
}



/**
 * binary_tree_levelorder - traversing through binary tree using level-order
 * @tree: pointer to the root node
 * @func: pointer to a function to call for each node
 * return: nothing if tree and func is NULL
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	queue_t *queue = create_queue();

	enqueue(queue, (binary_tree_t *)tree);

	while (queue->front != NULL)
	{
		binary_tree_t *current = dequeue(queue);

		func(current->n);

		if (current->left)
			enqueue(queue, current->left);

		if (current->right)
			enqueue(queue, current->right);
	}

	free(queue);
}
