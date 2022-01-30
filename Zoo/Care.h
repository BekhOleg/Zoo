#pragma once
#include "ALlstandartInclude.h"
class Care : public Animal
{
private:
	char* Typefoodforanimals;
	bool cleanaviary;
	bool vaccinations;
	bool partner; //партнер противоположного пола 
	bool parasites;
public:
	Care();
	~Care();
	void SetTypefoodforanimals(const char* foodforanimals);
	void SetCleanaviary();
	void SetVaccination();
	void SetPartner();
	void SetParasites();
	void GetParasites() const;
	void GetPartner() const;
	void GetVaccinations() const;
	void GetcLeanaviary() const;
	const char* const GetTypefoodforanimals() const;


};
