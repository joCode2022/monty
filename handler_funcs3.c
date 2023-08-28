#include "monty.h"
#include "lists.h"
/**
 * rotl_handler - handles the rotl instruction
 * @stack: double pointer to the stack to push to
 * @line_num: number of the line in the file
 */

void rotl_handler(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;
	int num  = 0;

	(void)line_num;

	if (*stack == NULL)
		return;
	temp = get_dnodeint_at_index(*stack, 0);
	num = temp->n;
	delete_dnodeint_at_index(stack, 0);
	add_dnodeint_end(stack, num);
}

/**
 * rotr_handler - handles the rotr instruction
 * @stack: double pointer to the stack to push to
 * @line_num: number of the line in the file
 */

void rotr_handler(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;
	int num = 0, len = dlistint_len(*stack);

	(void)line_num;

	if (*stack == NULL)
		return;
	temp = get_dnodeint_at_index(*stack, len - 1);
	num = temp->n;
	delete_dnodeint_at_index(stack, len - 1);
	add_dnodeint(stack, num);
}

/**
 * stack_handler - handles the stack instruction
 * @stack: double pointer to the stack to push to
 * @line_num: number of the line in the file
 */

void stack_handler(stack_t **stack, unsigned int line_num)
{
	(void)stack;
	(void)line_num;
	data.qflag = 0;
}

/**
 * queue_handler - handles the queue instruction
 * @stack: double pointer to the stack to push to
 * @line_num: number of the line in the file
 */

void queue_handler(stack_t **stack, unsigned int line_num)
{
	(void)stack;
	(void)line_num;
	data.qflag = 1;
}
