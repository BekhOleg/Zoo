#pragma once
#include "ALlstandartInclude.h"
class Date
{
private:
	int day;
	int hour;
	int min;
	int month;
public:
	Date();
	friend class Staff;
	friend class Tickets;
};