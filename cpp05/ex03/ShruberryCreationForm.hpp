#ifndef SHRUBERRYCRETIONFORM_HPP
# define SHRUBERRYCRETIONFORM_HPP

# include "AForm.hpp"

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