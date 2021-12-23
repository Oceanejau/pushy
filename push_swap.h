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

int		check_arg(int c, char **v, int x);
int		trois_a(long long int **tab, t_pushy *swap);
int		trois_b(long long int **tab, t_pushy *swap);
int		cinq(long long int **tab, t_pushy *swap);
int		where(long long int **tab, t_pushy *swap);
int		pos(long long int **tab, t_pushy *swap);
int		more(long long int **tab, t_pushy *swap);
int		noyau(long long int **tab, t_pushy *swap);

void		fat_lita(long long int **tab, t_pushy *swap);
void		fat_litb(long long int **tab, t_pushy *swap);

int		doubles(long long int **tab, int size);
int		fill_tab(char *AB, long long int **tab);
int		main(int argc, char **argv);
int		str_size_ll(char *str,int size, int neg,long long int *nba);


int		err(long long int **tab);
int		ordr_a(long long int **tab, t_pushy *swap);
int		ordr_b(long long int **tab, t_pushy *swap);
int		ordr_ab(long long int **tab, t_pushy *swap);

void	do_pa(long long int **tab, t_pushy *swap);
void	do_pb(long long int **tab, t_pushy *swap);

void	do_sa(long long int **tab, t_pushy *swap);
void	do_sb(long long int **tab, t_pushy *swap);
void	do_ss(long long int **tab, t_pushy *swap);

void	do_ra(long long int **tab, t_pushy *swap);
void	do_rb(long long int **tab, t_pushy *swap);
void	do_rr(long long int **tab, t_pushy *swap);

void	do_rra(long long int **tab, t_pushy *swap);
void	do_rrb(long long int **tab, t_pushy *swap);
void	do_rrr(long long int **tab, t_pushy *swap);

#endif
