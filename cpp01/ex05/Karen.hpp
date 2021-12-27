#ifndef KAREN
# define KAREN

# include <cstring>
# include <string>
# include <iostream>

class Karen
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	void complain( std::string level );
};

#endif