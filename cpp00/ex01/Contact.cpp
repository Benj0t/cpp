#include "Contact.hpp"

void Contact::SetFirstName(std::string data)
{
    this->_firstname = data;
}

void Contact::SetLastName(std::string data)
{
    this->_lastname = data;
}

void Contact::SetNickName(std::string data)
{
    this->_nickname = data;
}

void Contact::SetPhone(std::string data)
{
    this->_phone = data;
}

void Contact::SetSecret(std::string data)
{
    this->_secret = data;
}

std::string Contact::GetFirstName()
{
    return (this->_firstname);
}

std::string Contact::GetLastName()
{
    return (this->_lastname);
}

std::string Contact::GetNickName()
{
    return (this->_nickname);
}

std::string Contact::GetPhone()
{
    return (this->_phone);
}

std::string Contact::GetSecret()
{
    return (this->_secret);
}

Contact::Contact()
{
}

Contact::~Contact()
{
}