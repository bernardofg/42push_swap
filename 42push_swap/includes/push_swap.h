#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "stdio.h"
# include "stdlib.h"
# include "unistd.h"

typedef struct s_stacks
{
	int		*a;
	int		*b;
	int		a_size;
	int		b_size;
	char	*join_args;
}			t_stacks;

void		rotate(int *array, int size, char *direction, char *list);
void		swap(char *op, int *array, int size);
void		push(char *op, t_stacks *s);
void		sort_three(t_stacks *s);
void		sort_four_or_five(t_stacks *s);
void		radix_sort(t_stacks *s);
void		parse_numbers(t_stacks *s);
void		create_index(t_stacks *s);
void		initialize_stacks(int argc, char **argv, t_stacks *s);
void		free_message(t_stacks *s, char *msg);
void		check_duplicate(t_stacks *s, int i);
int			array_is_sorted(t_stacks *s);
int			ft_atol(const char *n, t_stacks *s);

#endif
