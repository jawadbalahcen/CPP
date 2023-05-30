/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:38:45 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/30 16:02:51 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FINDREPLACE_H
# define FINDREPLACE_H

#include <iostream>
#include <fstream>

class FindReplace	{
	
  private:
	std::string filename;
	std::string s1;
	std::string s2;
	std::ifstream &file;
	std::ofstream &file1;
	
  public:
	FindReplace(std::string Filename, std::string S1, std::string S2,
				std::ifstream &File, std::ofstream &File1)
	: filename(Filename) , s1(S1), s2(S2), file(File), file1(File1) {}
	~FindReplace() {
		file.close();
		file1.close();
	}
	int check_error();
	void read_file(std::string &buffer);
	void replace(std::string buffer);
};

#endif