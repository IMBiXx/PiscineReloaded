/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 14:58:09 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/02 15:03:04 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	i = 0;


int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_sort_params(ac, av);
	}
	return (0);
}
