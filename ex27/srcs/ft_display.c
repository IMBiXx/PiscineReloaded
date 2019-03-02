/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 18:33:49 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/02 21:17:32 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_display.h"

void	ft_error(int error)
{
	if (error == 1)
		write(2, "File name missing.\n", 19);
	else
		write(2, "Too many arguments.\n", 20);
}

void	ft_display(char *av)
{
	int		opened;
	int		ret;
	char	buf[BUFF_SIZE + 1];

	opened = open(av, O_RDONLY);
	while ((ret = read(opened, buf, BUFF_SIZE)) > 0)
		ft_putnstr(buf, ret);
	close(opened);
}

int		main(int ac, char **av)
{
	if (ac > 2)
		ft_error(ac);
	else if (ac == 2)
		ft_display(av[1]);
	else
		ft_error(ac);
}
