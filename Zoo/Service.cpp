#include "ALlstandartInclude.h"
Service::Service()
{
	foodforclients = new char[50];
	strcpy_s(foodforclients, 49, "BestFood");
	int r = rand() % 2;
	if (r == 0) regulations = Regulations::Dontfeed;
	else regulations = Regulations::Donotclimb;
	prices = 0;
	paravozforkids = true;
	carousel = true;
}

Service::~Service()
{
	if (foodforclients != nullptr) delete[] foodforclients;

}
////////////////////////////////////////////////////////////////
void Service::SetFoodforclients(const char* foodforclients)
{
	if (!foodforclients || strlen(foodforclients) == 0)
		return;

	if (this->foodforclients != nullptr)
	{
		delete[] this->foodforclients;
	}

	this->foodforclients = new char[strlen(foodforclients) + 1];
	strcpy_s(this->foodforclients, strlen(foodforclients) + 1, foodforclients);
}
void Service::SetRegulations(int regulations)
{
	this->prices = regulations;
}
void Service::GetPrice(int prices)
{
	this->prices = 1000;

}
void Service::SetParavozforkids()
{
	if (paravozforkids = false)
		Staff::Warehousemanager; wage -= fine * 2;

}
void Service::SetCarousel()
{

	this->carousel = 100;
}
////////////////////////////////////////////////////////////////////////
double Service::GetPrices() const
{
	return prices;
}
const char* const Service::GetFoodforclients() const
{
	return foodforclients;
}
int Service::GetRegulations() const
{
	return regulations;
}
void Service::GetParavozforkids() const
{
}
void Service::GetCarousel() const
{
	
}