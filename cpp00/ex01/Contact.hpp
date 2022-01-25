#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>
# include <iomanip>
# include <cstring>
# include <string>

class Contact
{
	private:
		std::string _firstname, _lastname, _nickname, _phone, _secret;
	public:
		std::string GetLastName();
		std::string GetNickName();
		std::string GetFirstName();
		std::string GetPhone();
		std::string GetSecret();
		void SetLastName(std::string data);
		void SetNickName(std::string data);
		void SetFirstName(std::string data);
		void SetPhone(std::string data);
		void SetSecret(std::string data);
		Contact();
		~Contact();
};


#endif