#include "Work.hpp"

Work::Work()
{
	int overtimeChance = rand() % 7;
}
void Work::gongZuo(User &user)
{	
	if(user::phrase == "work")
	{
		paycheck = workDays.size() * 3;	
		if(overtimeChance == 0)
		{
			paycheck *= overtime;
		}
		user::walletAmount += paycheck;
	}
}	

void Work::daysOfWork(User &user)
{
	int currentDay = user::getDayNumber();
	
	workDays.push_back(1);
	if(currentDay % 7 == 0)
	{
		vector.clear();
	}
}