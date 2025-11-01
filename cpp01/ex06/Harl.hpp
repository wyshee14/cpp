/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:21:52 by wshee             #+#    #+#             */
/*   Updated: 2025/11/01 16:21:52 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public:
		enum LogLevel{
			DEBUG,
			INFO,
			WARNING,
			ERROR,
			INVALID
		};
		LogLevel GetLevel(std::string const& filter);
        void complain( std::string level );
        Harl();
        ~Harl();
};

#endif
