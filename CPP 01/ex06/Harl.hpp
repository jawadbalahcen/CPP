/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:32:34 by jbalahce          #+#    #+#             */
/*   Updated: 2023/06/05 16:17:54 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ç
#include <iostream>

class Harl	{

  private:
  	void (Harl::*func_array[4])(void);
	std::string COMMENTS[4];
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	
  public:
	void    complain(std::string level);
	Harl(void)
	{
		func_array[0] = &Harl::debug; COMMENTS[0] = "DEBUG";
		func_array[1] = &Harl::info; COMMENTS[1] = "INFO";
		func_array[2] = &Harl::warning; COMMENTS[2] = "WARNING";
		func_array[3] = &Harl::error; COMMENTS[3] = "ERROR";
	}
};


#endif