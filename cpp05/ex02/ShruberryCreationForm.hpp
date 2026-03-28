/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 13:57:21 by wshee             #+#    #+#             */
/*   Updated: 2026/03/28 17:05:12 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCRETIONFORM_HPP
# define SHRUBERRYCRETIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

// Concrete class
class ShruberryCreationForm : public AForm {
    private:
        const std::string _target;

    public:
        // OCF
        ShruberryCreationForm(const std::string target);
        ShruberryCreationForm(const ShruberryCreationForm &copy);
        ShruberryCreationForm &operator=(const ShruberryCreationForm &other);
        ~ShruberryCreationForm();

        // Getter
        const std::string& getTarget() const;
        void execute(Bureaucrat const& executor) const;
};

#endif
