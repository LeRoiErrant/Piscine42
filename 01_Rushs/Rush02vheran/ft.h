#ifndef FT_H
# define FT_H

typedef struct s_list
{
	int		nb;
	char	*wd;
}		t_list;
int		ft_atoi(const char *str);
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
char	*ft_getnb(int fd);
char	*ft_getval(int fd, char *c);
t_list	*process(char *file);
int	getmult(int nb);
int	getdec(int nb);
void	ft_print(int n, struct s_list *tab, int *first);

#endif