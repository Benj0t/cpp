#ifndef PHONEBOOK
# define PHONEBOOK

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <cstring>
# include <string>

class Phonebook
{
    public:
        Contact GetContact(int id);
        Contact GetAllContact(void);
        void    SetContact(int id, Contact NewContact);
        Phonebook();
        ~Phonebook();
	private:
		Contact _contacts[8];
};

#endif