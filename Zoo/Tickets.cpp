#include "ALlstandartInclude.h"
Tickets::Tickets()
{
	int r = rand() % 2;
	if (r == 0) price = Price::Adult;
	else price = Price::Ñhildren;
	adult = false;
	skidki = 20;
	price = 100;
}

///////////////////////////////////////////////////////
void Tickets::SetPrice(int price)
{

	if (Price::Adult)
		this->price = 200;
	else if (Price::Ñhildren)
		this->price = 100;

}
void Tickets::SetSkidki(double skidki)
{

	this->skidki = price - 30;
}
void Tickets::SetTimesofDay(int min, int hour, int day, int month)
{
	if (hour > 9 && hour < 12)
		price -= -20;

}
void Tickets::SetDayofweek(int dayofweek)
{

	this->dayofweek;
}

void Tickets::SetAdult()
{
	if (adult) price -= 20;

}
/////////////////////////////////////////////
void Tickets::GetAdult() const
{
	
}
Date Tickets::GetTimesofDay() const
{
	return timesofDay;
}
Date Tickets::GetDayofweek() const
{
	return dayofweek;
}
int Tickets::GetSkidki() const
{
	return skidki;
}
int Tickets::GetPrice() const
{
	return price;
}