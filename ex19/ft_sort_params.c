/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 14:58:09 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/02 17:24:51 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putendl(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int ac, char **av)
{
	int		i;
	char	*tmp;
	int		didswap;

	i = 1;
	didswap = 0;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			tmp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp;
			didswap = 1;
		}
		if (didswap == 1)
		{
			didswap = 0;
			i = 1;
		}
		else
			i++;
	}
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac > 1)
	{
		ft_sort_params(ac, av);
		while (i < ac)
		{
			ft_putendl(av[i]);
			i++;
		}
	}
	return (0);
}
