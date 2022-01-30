#pragma once
#include "ALlstandartInclude.h"
class Service : public Staff
{
private:
	enum Regulations { Dontfeed, Donotclimb };

	char* foodforclients;
	int regulations; //правила 
	double prices;
	bool paravozforkids;
	bool carousel;
public:

	Service();
	~Service();
	void GetPrice(int prices);
	void SetFoodforclients(const char* foodforclients);
	void SetRegulations(int regulations);
	void SetPrice(int prices);
	void SetParavozforkids();
	void SetCarousel();
	double GetPrices() const;
	const char* const GetFoodforclients() const;
	int GetRegulations() const;
	void GetParavozforkids() const;
	void GetCarousel() const;

};