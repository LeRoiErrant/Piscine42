/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:48:35 by mthiesso          #+#    #+#             */
/*   Updated: 2021/09/19 21:42:07 by vheran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct s_list
{
	unsigned int	nb;
	char			*wd;
}					t_list;
unsigned int	getmult(unsigned int nb);
unsigned int	getdec(unsigned int nb);
int				ft_atoi(const char *str);
char			*ft_strdup(char *src);
void			ft_putstr(char *str);
char			*ft_getnb(int fd);
char			*ft_getval(int fd, char *c);
t_list			*process(char *file);	
int				ft_print(unsigned int n, struct s_list *tab, int *first);
int				ft_check_error(char *str);
int				ft_str_is_numeric(char *str);
int				ft_strlen(char *str);
int				ft_check_max(char *str);
int				ft_check(unsigned int n, struct s_list *tab);
int				ft_resolution(char *dictio, char *val);

#endif
