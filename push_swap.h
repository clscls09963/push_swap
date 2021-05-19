/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeykim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:36:46 by hyeykim           #+#    #+#             */
/*   Updated: 2021/05/19 13:36:48 by hyeykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft/libft.h"

typedef	struct		s_node
{
	int				value;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

typedef struct		s_lists
{
	t_node *a_arr;
	t_node *b_arr;
}					t_lists;

t_node				*create_node(int value);
void				push_front(t_node *head, int value);
t_node				*find_back(t_node *lst);
int					push_back(t_node *head, int value);
void				pop_front(t_node *head);
void				pop_back(t_node *head);
void				print_arr(t_node *head);
void				do_sa(t_lists *lists);
void				do_sb(t_lists *lists);
void				do_ss(t_lists *lists);
void				do_pa(t_lists *lists);
void				do_pb(t_lists *lists);
void				do_ra(t_lists *lists);
void				do_rb(t_lists *lists);
void				do_rr(t_lists *lists);
void				do_rra(t_lists *lists);
void				do_rrb(t_lists *lists);
void				do_rrr(t_lists *lists);
int					overlap(t_node *head, t_node *back, int num);
void				all_free(t_node *head);
int					error_check(char**argv, t_lists *stack);
#endif
