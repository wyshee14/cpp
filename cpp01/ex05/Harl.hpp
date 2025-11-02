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
        void _debug( void );
        void _info( void );
        void _warning( void );
        void _error( void );

    public:
        void complain( std::string level );
        Harl();
        ~Harl();
};

#endif
