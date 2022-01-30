#pragma once
#include "ALlstandartInclude.h"

class Tickets
{
private:
	enum Price { Adult, Ñhildren };
	Date timesofDay;
	Date dayofweek;
	bool adult; // ëüãîòíûé
	double skidki;
	int price;
public:
	Tickets();
	int GetSkidki() const;
	void SetPrice(int price);
	void SetSkidki(double skidki);
	void SetTimesofDay(int min, int hour, int day, int month);
	void SetDayofweek(int dayofweek);
	void SetAdult();
	void GetAdult() const;
	Date GetTimesofDay() const;
	Date GetDayofweek() const;
	int GetPrice() const;
};
