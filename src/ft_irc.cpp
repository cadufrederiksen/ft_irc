/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_irc.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmarqu <carmarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:37:35 by carmarqu          #+#    #+#             */
/*   Updated: 2025/04/14 12:37:56 by carmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_irc.hpp"

void error_exit(std::string msg)
{
	std::cout << msg << "\n";
	exit(1);
}

int check_port(std::string port)
{
	for (int i = 0; i < port.size(); i++)
	{
		if (!std::isdigit(port[i]))
			return (0);
	}
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 3)
		error_exit("Wrong number of arguments");
	if(!check_port(argv[1]))
		error_exit("Invalid port");
	t_data *data = new t_data;
	data->pass = argv[2];
	data->port = argv[1];
	
	std::cout << data->pass << "\n";
	std::cout << data->port << "\n";
	
	delete (data);
}