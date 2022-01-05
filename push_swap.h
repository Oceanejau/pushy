#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
//# include <stdio.h>

typedef struct		s_pushy
{
	int			size;
	int			sizea;
	int			sizeb;
	int			ret;
	int			ret_fl;
	int			ret_dbl;
	int			oka;
	int			okb;
	int			okab;
	int			top;
	int			bot;
	int			lit_a;
	int			lit_b;
	int			fat_a;
	int			fat_b;
	int			nut_x;
	int			nut_size;	
}					t_pushy;

int		check_arg(char **v, int y);
int		trois_a(int **tab, t_pushy *swap);
int		trois_b(int **tab, t_pushy *swap);
int		cinq(int **tab, t_pushy *swap);
int		where(int **tab, t_pushy *swap, int nb);
int		pre_pos(int **tab, t_pushy *swap);
int		pos(int **tab, t_pushy *swap, int pos);
int		more(int **tab, t_pushy *swap);
int		noyau(int **tab, t_pushy *swap);
int		ft_atoi(const char *str);

void		showtab(int **tab, t_pushy *swap);

void		fat_lita(int **tab, t_pushy *swap);
void		fat_litb(int **tab, t_pushy *swap);

int		doubles(int **tab, int size);
int		fill_tab(char **AB, int **tab, t_pushy *swap);
int		main(int argc, char **argv);
int		str_size_ll(char *str,int size, int neg,int *nba);


int		err(int **tab);
int		ordr_a(int **tab, t_pushy *swap);
int		ordr_b(int **tab, t_pushy *swap);
int		ordr_ab(int **tab, t_pushy *swap);

void	do_pa(int **tab, t_pushy *swap);
void	do_pb(int **tab, t_pushy *swap);

void	do_sa(int **tab, t_pushy *swap);
void	do_sb(int **tab, t_pushy *swap);
void	do_ss(int **tab, t_pushy *swap);

void	do_ra(int **tab, t_pushy *swap);
void	do_rb(int **tab, t_pushy *swap);
void	do_rr(int **tab, t_pushy *swap);

void	do_rra(int **tab, t_pushy *swap);
void	do_rrb(int **tab, t_pushy *swap);
void	do_rrr(int **tab, t_pushy *swap);

#endif
