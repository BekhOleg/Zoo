#include "ALlstandartInclude.h"
Care::Care()
{
	Typefoodforanimals = new char[50];
	strcpy_s(Typefoodforanimals, 49, "food");
	cleanaviary = true;
	vaccinations = true;
	partner = true;
	parasites = false;
}

Care::~Care()
{
	if (Typefoodforanimals != nullptr) delete[] Typefoodforanimals;
}
////////////////////////////////////////////////////////////////
void Care::SetTypefoodforanimals(const char* foodforanimals)
{
	if (!foodforanimals || strlen(foodforanimals) == 0)
		return;

	if (this->Typefoodforanimals != nullptr)
	{
		delete[] this->Typefoodforanimals;
	}

	this->Typefoodforanimals = new char[strlen(foodforanimals) + 1];
	strcpy_s(this->Typefoodforanimals, strlen(foodforanimals) + 1, foodforanimals);
}
void Care::SetCleanaviary()
{
	if (cleanaviary == 1 && energy < 95)
		mood = true;
	energy += 5;
}
void Care::SetVaccination()
{
	health = 100;

}
void Care::SetPartner()
{
	mood = true;

}
void Care::SetParasites()
{
	health -= 20;
}
/////////////////////////////////////////////////////////////
void Care::GetParasites() const
{
	
}
void Care::GetPartner() const
{
	
}
void Care::GetVaccinations() const
{
	
}
void Care::GetcLeanaviary() const
{
	
}
const char* const Care::GetTypefoodforanimals() const
{
	return Typefoodforanimals;
}