/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 00:00:55 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/13 02:04:36 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# define YELLOW "\033[33m"
# define RED "\033[38;5;9m"
# define ORANGE "\033[38;5;202m"
# define GREEN "\033[38;5;34m"
# define PURPLE "\033[38;5;105m"
# define DULL_GREEN "\033[38;5;58m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

# define ERR_ARG "./replace filename src_str dst_str"
# define ERR_EMPTY_OR_DIR "The file is an empty file or directory."
# define ERR_OPEN_FILE "Failed to open the file."
# define ERR_CREATE_FILE "Failed to open the file."
# define ERR_EMPTY_SRC "The string to be replaced is empty."

static void	error_exit(std::string error_message)
{
	std::cout << RED""BOLD"Error: " << error_message << RESET << std::endl;
	std::exit(EXIT_FAILURE);
}

void	output(std::ifstream &fin, std::string src, std::string dst, std::string filename)
{
	std::string	line;
	std::getline(fin, line);
	std::string::size_type	pos = line.find(src);
	if (fin.eof() && line.length() == 0)
	{
		fin.close();
		error_exit(ERR_EMPTY_OR_DIR);
	}
	std::ofstream fout(filename + ".replace");
	if (!fout)
	{
		fin.close();
		error_exit(ERR_CREATE_FILE);
	}
	while (42)
	{
		while (pos != std::string::npos)
		{
			line.replace(pos, src.length(), dst);
			pos = line.find(src, pos + src.length());
		}
		fout << line;
		if (fin.eof())
			break ;
		fout << std::endl;
		std::getline(fin, line);
		pos = line.find(src);
	}
	fout.close();
}

int	main(int argc, char **argv)
{
	std::string	filename;
	std::string	src;
	std::string	dst;

	if (argc != 4)
		error_exit(ERR_ARG);
	filename = argv[1];
	src = argv[2];
	dst = argv[3];
	if (dst.empty())
		error_exit(ERR_EMPTY_SRC);
	std::ifstream fin(filename);
	if (!fin)
		error_exit(ERR_OPEN_FILE);
	output(fin, src, dst, filename);
	fin.close();
	return (EXIT_SUCCESS);
}
