#include "Phonebook.hpp"

Contact Phonebook::GetContact(int id)
{
    if (id < 0)
        return (this->_contacts[0]);
    if (id >= 8)
        return (this->_contacts[7]);
    return (this->_contacts[id]);
}

void Phonebook::SetContact(int id, Contact NewContact)
{
    _contacts[id] = NewContact;
}


Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}