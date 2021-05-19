#include "push_swap.h"

void do_sa(t_lists *lists)
{
	t_node *a_node1;
	t_node *a_node2;
	int tmp;

	//printf("%p", lists); a_arr아 비워져있을떄 왜 segfault 나는지 모르겠음

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