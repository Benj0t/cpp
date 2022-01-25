#ifndef ZOMBIE
# define ZOMBIE

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
		void announce(void);
		Zombie(void);
		~Zombie(void);
};


#endif