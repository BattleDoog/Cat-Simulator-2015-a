#include <Work.hpp>

Work::Work()
{
	int overtimeChance = rand() % 7;
}
void Work::gongZuo(User &user)
{	
	if(user.phrase.compare("work") == 0)
	{
		daycheck = workDays.size() * 3;

		if(overtimeChance == 0)
			daycheck *= overtime;
		
		user.walletAmount += daycheck;
		std::cout << "You now have: $" << user.WalletAmount << std::endl;
	}
}	
void Work::daysOfWork(User &user)
{
	int currentDay = user.getDayNumber();
	
	workDays.push_back(1);
	if(currentDay % 7 == 0)
	{
		workDays.clear();
	}
}