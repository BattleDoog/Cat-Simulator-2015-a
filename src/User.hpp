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
	void userInput();
	std::string phrase;
	float walletAmount;
private:
	int dayNumber;
};

#endif