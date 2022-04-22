/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:17:56 by aricholm          #+#    #+#             */
/*   Updated: 2022/03/31 18:27:24 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage:\n"
			<< "./replacer <filename> <old_string> <new_string>" << std::endl;
		return (1);
	}
	std::string		filename = argv[1];
	std::ifstream	infile;
	infile.open(argv[1]);
	if (!infile.is_open())
	{
		std::cerr << "Error opening input file." << std::endl;
		return 1;
	}
	filename += ".replace";
	std::ofstream	outfile;
	outfile.open(filename.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!outfile.is_open())
	{
		infile.close();
		std::cerr << "Error creating new file." << std::endl;
		return 1;
	}
	std::stringstream buffer;
	buffer << infile.rdbuf();
	infile.close();
	std::string string = buffer.str();
	size_t	begin = 0;
	size_t	end = 0;
	std::string from = argv[2];
	std::string to = argv[3];
	while ((end = string.find(from, begin)) != std::string::npos)
	{
		outfile << string.substr(begin, end - begin) << to;
		begin = end + from.length();
		end = begin;
	}
	outfile << string.substr(begin, std::string::npos);
	outfile.close();
	return 0;
}
