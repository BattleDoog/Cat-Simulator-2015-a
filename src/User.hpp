#ifndef USER_HPP
#define USER_HPP

#include <iostream>
#include <string>
#include <cctype>

class User
{
public:
	User();
	const int getDayNumber();
	std::vector <std::string> obtained;
	std::string phrase;
	int walletAmount;

private:
	int dayNumber;
};

#endif