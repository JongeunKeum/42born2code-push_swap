#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# include "structures.h"

void	print_error(void);
int		ft_atoi(char *arg);
int		check_arg(char *arg);
t_stack	*init_stack(int argc, char **argv);

#endif