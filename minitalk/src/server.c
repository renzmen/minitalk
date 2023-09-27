/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 01:47:20 by lrenzett          #+#    #+#             */
/*   Updated: 2023/09/23 01:32:27 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define END "\033[0m"

void	display_banner(int pid)
{
	ft_printf("\n\t%s███╗   ███╗██╗███╗   ██╗██╗████████╗ █████╗ ██╗     ██╗██╗\
			%s\n", YELLOW, END);
	ft_printf("\t%s██╔████╔██║██║██╔██╗ ██║██║   ██║   ███████║██║     █████╔╝\
			%s \n", YELLOW, END);
	ft_printf("\t%s██║╚██╔╝██║██║██║╚██╗██║██║   ██║   ██╔══██║██║     ██╔═██╗\
			%s \n", YELLOW, END);
	ft_printf("\t%s██║ ╚═╝ ██║██║█ █║ ╚████║██║   ██║   ██║  ██║███████╗██║  ██╗\
			%s\n", YELLOW, END);
	ft_printf("\t%s╚═╝     ╚═╝╚═╝╚═╝  ╚═══╝╚═╝   ╚═╝   ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝\
			%s\n", YELLOW, END);
	ft_printf("%s\n\t\tPID: %d%s\t\t\t%sBy: lrenzett%s\n", RED, pid, END,
		YELLOW, END);
	ft_printf("\t⊱ ────────────────────── {.⋅ ✯ ⋅.} ─────────────────────── ⊰\
			\n\n");
}

void	sigHandler(int sig, siginfo_t *info, void *context)
{
	static unsigned char	bit;
	static int	c;
	static int	received;

	(void)context;
	bit = 0;
	received = 0;
	if(sig == SIGUSR1)
		c |= (1 << bit);
	bit++;
	received++;
	if (bit == 8)
	{
		ft_printf("%c", c);
		if (c == 0)	
		{
			ft_printf("\n%s%d signal recieved from client PID: %d%s\n",
			GREEN, received, info->si_pid, END);
			received = 0;
			kill(info->si_pid, SIGUSR1);
		}
		c = 0;
		bit = 0;
	}
}

	
int main ()
{
	struct sigaction	server;
	int	pid;

	pid = getpid();
	ft_printf("%d", pid);
	display_banner(pid);
	server.sa_sigaction = sigHandler;
	server.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &server, 0);
	sigaction(SIGUSR2, &server, 0);
	while (1)
		pause();
	return(0);
}
