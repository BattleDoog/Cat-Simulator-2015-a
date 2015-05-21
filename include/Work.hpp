#ifndef WORK_HPP
#define WORK_HPP

#include <iostream>
#include <random>
#include <vector>

class Work
{
public:
	Work();
	void daysOfWork();
	void gongZuo();
private:
	const float overtime(1.25);
	int daycheck;
	std::vector<int> workDays;
};

#endif