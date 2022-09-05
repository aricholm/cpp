#include "Converter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Converter::Converter(const std::string str) : _data(str)
{
	setType();
	print();
}

Converter::Converter( const Converter & src ) : _data(src.getData())
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Converter::~Converter()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Converter &				Converter::operator=( Converter const & rhs )
{
	if ( this != &rhs )
	{
		this->_data = rhs.getData();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Converter const & i )
{
	i.print();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Converter::print() const
{
	tochar();
	toint();
	tofloat();
	todouble();
}

Converter::e_type	Converter::setType()
{
	if (_data.size() == 1)
	{
		if (isdigit(_data[0]))
		{
			_number.i = _data[0] - '0';
			return _type = INT;
		}
		if (isprint(_data[0]))
		{
			_number.c = _data[0];
			return _type = CHAR;
		}
		throw InvalidInput();
	}
	if (_data == "nan" || _data == "nanf")
		return _type = NaN;
	if (_data == "inf" || _data == "+inf" || _data == "+inff")
		return _type = INF;
	if (_data == "-inf" || _data == "-inff")
		return _type = NINF;
	if (validInt(_data))
	{
		_number.i = atoi(_data.c_str());
		return _type = INT;
	}
	if (isFloatorDouble(_data))
		return DOUBLE;
	throw InvalidInput();
	
}

void	Converter::charconvert(double i) const
{
	if (i == floor(i))
	{
		if (floor(i) >= 32 && floor(i) <= 126)
			std::cout << "'" << static_cast<char>(i) << "'";
		else
			std::cout << "Non displayable";
	}
	else
		std::cout << "impossible";
}

void	Converter::tochar() const
{
	std::cout << "char: ";
	if (_type == CHAR)
		std::cout << "'" << _number.c << "'";
	if (_type == INT)
		charconvert(_number.i);
	if (_type == FLOAT)
		charconvert(_number.f);
	if (_type == DOUBLE)
		charconvert(_number.d);	
	if (_type > 4 )
		std::cout << "impossible";
	std::cout << std::endl;
}

void	Converter::toint() const
{
	std::cout << "int: ";
	if (_type == CHAR)
		std::cout << static_cast<int>(_number.c);
	if (_type == INT)
		std::cout << _number.i;
	if (_type == FLOAT)
	{
		std::cout << static_cast<int>(_number.f);
		if (_number.f != floor(_number.f))
			std::cout << " (truncated)";
		if (_number.f > std::numeric_limits<int>::max()
			|| _number.f < std::numeric_limits<int>::min())
			std::cout << " (overflow)";
	}
	if (_type == DOUBLE)
	{
		std::cout << static_cast<int>(_number.d);
		if (_number.d != floor(_number.d))
			std::cout << " (truncated)";
		if (_number.d > std::numeric_limits<int>::max()
			|| _number.d < std::numeric_limits<int>::min())
			std::cout << " (overflow)";
	}
	if (_type > 4)
		std::cout << "impossible";
	std::cout << std::endl;
}

void	Converter::tofloat() const
{
	std::cout << "float: ";
	if (_type == CHAR)
		std::cout << static_cast<float>(_number.c);
	if (_type == INT)
		std::cout << static_cast<float>(_number.i);
	
	if (_type == FLOAT)
		std::cout <<_number.f;
	if (_type == DOUBLE)
		std::cout << static_cast<float>(_number.d);
	if (_type == NaN)
		std::cout << "nan";
	if (_type == INF)
		std::cout << "+inf";
	if (_type == NINF)
		std::cout << "-inf";
	if (isWhole())
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	Converter::todouble() const
{
	std::cout << "double: ";
	if (_type == CHAR)
		std::cout << static_cast<float>(_number.c);
	if (_type == INT)
		std::cout << static_cast<float>(_number.i);
	if (_type == FLOAT)
		std::cout << static_cast<float>(_number.f);
	if (_type == DOUBLE)
		std::cout << _number.d;
	if (_type == NaN)
		std::cout << "nan";
	if (_type == INF)
		std::cout << "+inf";
	if (_type == NINF)
		std::cout << "-inf";
	if (isWhole())
		std::cout << ".0";
	std::cout << std::endl;
}

bool	Converter::validInt(const std::string str) const
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (i == 0 && (str[i] == '-' || str[i] == '+'))
			continue;
		if (!isdigit(str[i]))
			return false;
	}
	if (atol(str.c_str()) > std::numeric_limits<int>::max()
		|| atol(str.c_str()) < std::numeric_limits<int>::min())
		return false;
	return true;
}

bool	Converter::isFloatorDouble(const std::string str)
{
	size_t i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (isdigit(str[i]))
		i++;
	if (str[i] == '.')
	{
		i++;
		if (!isdigit(str[i++]))
			return false;
		while (isdigit(str[i]))
			i++;
	}
	if (str[i] == 'f' && i + 1 == str.size())
	{
		_type = FLOAT;
		double nb = atof(str.c_str());
		if (nb > std::numeric_limits<float>::max()
			|| nb < -std::numeric_limits<float>::max())
		throw InvalidInput();
		_number.f = (float) nb;
		return true;
	}
	if (i == str.size())
	{
		_type = DOUBLE;
		_number.d = atof(str.c_str());
		return true;
	}
	return false;
}

bool	Converter::isWhole() const
{
	if (_type == CHAR || (_type == INT && _number.i < 1000000))
		return true;
	if (_type == FLOAT && _number.f < 999999.46874)
		return (_number.f == floor(_number.f));
	if (_type == DOUBLE && _number.d < 999999.5)
		return (_number.d == floor(_number.d));
	return false;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string 		Converter::getData() const { return _data; }


/* ************************************************************************** */

const char* Converter::InvalidInput::what() const throw()
{
	return "ConverterException: Invalid input!";
}
