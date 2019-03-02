/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 18:34:30 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/02 21:17:14 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_H
# define FT_DISPLAY_H
# define BUFF_SIZE 42
# include <unistd.h>
# include <fcntl.h>

void	ft_putnstr(char *str, int n);
void	ft_putchar(char c);

#endif
