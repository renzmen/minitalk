/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:31:45 by lrenzett          #+#    #+#             */
/*   Updated: 2023/09/23 00:52:24 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_text(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (c & (1 << bit++))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
	}
}

void	sig_handler(int sig)
{
	if (sig == SIGUSR1)
		ft_printf("%stext sent succesfully!%s", GREEN, END);
}

int	main(int argc, char **argv)
{
	int	i;
	int	pid;

	if (argc != 3)
	{
		ft_printf("type: ./client <server pid> <text>");
		return (0);
	}
	else
	{
		pid = ft_atoi(argv[1]);
		i = 0;
		signal(SIGUSR1, sigHandler);
		ft_printf("%ssending text...\n%s", YELLOW, END);
		while (argv[2][i])
			sendText(pid, argv[2][i++]);
		sendText(pid, '\0');
	}
	return (0);
}
