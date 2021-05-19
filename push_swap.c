/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeykim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:36:39 by hyeykim           #+#    #+#             */
/*   Updated: 2021/05/19 13:36:41 by hyeykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int error_check(char**argv, t_lists *stack)
{
	int i;
	int j;
	long long num;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (j == 0 && (argv[i][0] == '-' || argv[i][j] == '+'))
				j++; 			
			if (!(ft_isdigit(argv[i][j])))
				return (1);
			//printf("isdigit ok\n");
			j++;
		}
		num = ft_atoi(argv[i]);
		if (num > 2147483647 ||  num < -2147483648)
			return (1);
		//printf("int_max ok\n");
		if (push_back(stack->a_arr, (int)num))
			return (1);
		//printf("rep ok\n");
		i++;
	}
	return (0);
}

void sort(t_lists *list)
{
}

int main(int argc, char **argv)
{
	t_lists	stack;
	int chk;

	stack.a_arr = create_node(0);
	stack.b_arr = create_node(0);
	
	chk = 0;
	if (argc > 1)
		chk = error_check(argv, &stack);
	else
		chk = 1;
	if (chk)
	{
		ft_putstr_fd("Error", 1);//에러일떄 리스트 전체 초기화
		all_free(stack.a_arr);
		free(stack.b_arr);
		return (0);
	}

	sort(&stack);
	
	/*printf("a : ");
	print_arr(stack.a_arr);
	printf("\n");
	printf("b : ");
	print_arr(stack.b_arr);
	printf("\n");*/
}
