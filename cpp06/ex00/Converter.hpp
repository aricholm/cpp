#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <cmath>
# include <cstdlib>
# include <climits>
# include <limits>

class Converter
{
	public:
		typedef enum {ERROR, CHAR, INT, FLOAT, DOUBLE, NaN, INF, NINF} e_type;
							Converter(const std::string);
							Converter( Converter const & src );
							~Converter();

		std::string			getData() const;
		void				print() const;

		Converter &			operator=( Converter const & rhs );

		class InvalidInput: public std::exception {
			const char*	what() const throw(); };
	private:
		std::string			_data;
		Converter::e_type	setType();

		void				tochar() const;
		void				toint() const;
		void				tofloat() const;
		void				todouble() const;

		void				charconvert(double n) const;
		bool				isWhole() const;
		e_type				_type;
		union number
		{
			char	c;
			int		i;
			float	f;
			double	d;
		};
		number				_number;

		bool				validInt(const std::string) const;
		bool				isFloatorDouble(const std::string);

};

std::ostream &			operator<<( std::ostream & o, Converter const & i );

#endif /* ******************************************************* CONVERTER_H */
