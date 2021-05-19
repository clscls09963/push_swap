#include "push_swap.h"

void do_rra(t_lists *lists)
{
	t_node *a;

	a = find_back(lists->a_arr);

	push_front(lists->a_arr, a->value);
	pop_back(lists->a_arr);
}

void do_rrb(t_lists *lists)
{
	t_node *b;

	b = find_back(lists->b_arr);

	push_front(lists->b_arr, b->value);
	pop_back(lists->b_arr);
}

void do_rrr(t_lists *lists)
{
	do_rra(lists);
	do_rrb(lists);
}