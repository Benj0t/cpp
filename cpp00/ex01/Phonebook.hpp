#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <cstring>
# include <string>

class Phonebook
{
    public:
        Contact GetContact(int id);
        void    SetContact(int id, Contact NewContact);
        Phonebook();
        ~Phonebook();
	private:
		Contact _contacts[8];
};

#endif