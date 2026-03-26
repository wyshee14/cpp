#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

// Concrete class
class PresidentialPardonForm : public AForm {
    private:
        const std::string _target;

    public:
        // OCF
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
        ~PresidentialPardonForm();

        // Getter
        const std::string& getTarget() const;
        void execute(Bureaucrat const& executor) const;
};

#endif