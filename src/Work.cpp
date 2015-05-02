#include "Work.hpp"

Work::Work()
{
	int overtimeChance = rand() % 7;
}
void Work::gongZuo()
{	
	if(phrase == "work")
	{
		paycheck = workDays.size() * 3;	
		if(overtimeChance == 0)
		{
			paycheck *= overtime;
		}
		User::walletAmount += paycheck;
	}
}	

void daysOfWork()
{
	int currentDay = User::getDayNumber();
	
	workDays.push_back(1);
	if(currentDay % 7 == 0)
	{
		vector.clear();
	}
}