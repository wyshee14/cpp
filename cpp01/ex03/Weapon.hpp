/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:32:00 by wshee             #+#    #+#             */
/*   Updated: 2025/11/01 15:32:00 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string _type;

	public:
		// Getter
		const std::string& getType( void ) const;
		// Setter
		void setType( std::string type );
		Weapon( std::string type);
		~Weapon();
};

#endif
