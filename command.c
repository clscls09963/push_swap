#include "push_swap.h"

void do_pa(t_lists *lists)
{
	t_node *a;
	t_node *b;

	if (lists->b_arr->next == NULL)
		return ;

	a = lists->a_arr;
	b = lists->b_arr->next;
	push_front(a, b->value);
	pop_front(lists->b_arr);
}

void do_pb(t_lists *lists)
{
	t_node *a;
	t_node *b;

	if (lists->a_arr->next == NULL)
		return ;

	a = lists->a_arr->next;
	b = lists->b_arr;
	push_front(b, a->value);
	pop_front(lists->a_arr);
}

void do_ra(t_lists *lists)
{
	t_node *a;

	if (lists->a_arr->next == NULL)
		return ;

	a = lists->a_arr->next;

	push_back(a, a->value);
	pop_front(lists->a_arr);
}

void do_rb(t_lists *lists)
{
	t_node *b;

	if (lists->b_arr->next == NULL)
		return ;

	b = lists->b_arr->next;

	push_back(b, b->value);
	pop_front(lists->b_arr);
}

void do_rr(t_lists *lists)
{
	do_ra(lists);
	do_rb(lists);
}

void do_sa(t_lists *lists)
{
	t_node *a_node1;
	t_node *a_node2;
	int tmp;

	if (lists->a_arr->next == NULL)
		return ;
	a_node1 = lists->a_arr->next;
	a_node2 = a_node1->next;
	
	tmp = a_node1->value;
	a_node1->value = a_node2->value;
	a_node2->value = tmp;
}

void do_sb(t_lists *lists)
{
	t_node *b_node1;
	t_node *b_node2;
	int tmp;

	if (lists->b_arr->next == NULL)
		return ;
	b_node1 = lists->b_arr->next;
	b_node2 = b_node1->next;

	tmp = b_node1->value;
	b_node1->value = b_node2->value;
	b_node2->value = tmp;
	
}

void do_ss(t_lists *lists)
{
	do_sa(lists);
	do_sb(lists);
}

void do_rra(t_lists *lists)
{
	t_node *a;

	if (lists->a_arr->next == NULL)
		return ;
	a = find_back(lists->a_arr);

	push_front(lists->a_arr, a->value);
	pop_back(lists->a_arr);
}

void do_rrb(t_lists *lists)
{
	t_node *b;

	if (lists->b_arr->next == NULL)
		return ;
	b = find_back(lists->b_arr);

	push_front(lists->b_arr, b->value);
	pop_back(lists->b_arr);
}

void do_rrr(t_lists *lists)
{
	do_rra(lists);
	do_rrb(lists);
}