#include "push_swap.h"

void do_pa(t_lists *lists)
{
	t_node *a;
	t_node *b;

	a = lists->a_arr;
	b = lists->b_arr->next;
	push_front(a, b->value);
	pop_front(lists->b_arr);
}

void do_pb(t_lists *lists)
{
	t_node *a;
	t_node *b;

	a = lists->a_arr->next;
	b = lists->b_arr;
	push_front(b, a->value);
	pop_front(lists->a_arr);
}