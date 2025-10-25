# include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Harl constructor called" << std::endl;
}

Harl:: ~Harl()
{
    std::cout << "Harl destructor called" << std::endl;
}

// only public attribute can access private attribute
void Harl::complain( std::string level )
{
    // Defines an alias type for member dunction pointers from class Harl
    // which takes in void argument and return void
    // without typedef will return error that f_ptr is not defined
    // because it is inside the class scope
    typedef void (Harl::*f_ptr)(void);
    f_ptr func[4]= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    // or write like this
    // void (Harl::*func[4])(void)= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    // Array of member function pointer
    std::string harlLevels[4] = {"debug", "info", "warning", "error"};

    for (int i = 0; i < 4; i++)
    {
        if (harlLevels[i] == level)
        {
            // call the member function through pointer
            // this-> is the object instance
            // *funcs[i] dereferences the function pointer
            // () calls the function
            (this->*func[i])();
            return ;
        }
    }
    std::cout << "Invalid level" << std::endl;
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
