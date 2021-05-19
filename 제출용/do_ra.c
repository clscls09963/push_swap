#include "push_swap.h"

void do_ra(t_lists *lists)
{
	t_node *a;

	a = lists->a_arr->next;

	push_back(a, a->value);
	pop_front(lists->a_arr);
}

void do_rb(t_lists *lists)
{
	t_node *b;

	b = lists->b_arr->next;

	push_back(b, b->value);
	pop_front(lists->b_arr);
}

void do_rr(t_lists *lists)
{
	do_ra(lists);
	do_rb(lists);
}