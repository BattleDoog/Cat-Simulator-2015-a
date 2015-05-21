#include <User.hpp>

User::User()
{
	walletAmount = 0;
}
void userInput()
{
	std::getline (std::cin, phrase);
	for(int i = 0; i < phrase.size(); i++)
	{
		phrase[i] = tolower(phrase[i]);
	}
}
const int User::getDayNumber()
{
	return dayNumber;
}
