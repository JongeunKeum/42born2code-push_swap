#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef struct s_stack	t_stack;

struct	s_stack
{
	int		value;
	t_stack	prev;
	t_stack	next;
};

#endif
