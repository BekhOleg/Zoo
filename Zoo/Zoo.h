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

class Staff
{
protected:
	enum Position { Manager, Сleaner, Warehousemanager, Securityguard, Сashier };
	enum Gender { Male, Female };
	char* name;
	int position; //должность
	int gender;
	char* responsibilities; //обязоности
	double wage; //зарплата 
	int fine; // штраф 
	Date cametowork;
public:
	Staff();
	~Staff();
	void SetСametowork(int min, int hour, int day, int month);
	void SetPosition(int position);	
	void  Setgender(int gender);	
	void SetResponsibilities(const char* responsibilities);	
	void SetWage(int wage);
	void SetFine();	
	Date GetCametowork() const;	
	const char* const GetName() const;	
	const char* const GetResponsibilities() const;
	int const GetPosition();	
	int const Getgender();	
	double const Getwage();
	int const GetFine();	
	void Salary(int month);	
	void Work(int min, int hour, int day, int month);	
	void Show() const;	
	friend class Date;

};
class Animal
{
protected:
	char* classanimal;
	char* poroda;
	bool forredbook; //из красной книги
	char* ffood; // траоведное/ плотоядное
	int energy;
	int health;
	bool mood; // настроение 
	bool ishungry;
public:
	Animal();
	~Animal();	
	void SetClassanimal(const char* classanimal);	
	void SetPoroda(const char* poroda);
	void SetFood(const char* typeoffood);
	void SetEnergy(int energy);	
	void SetHealth(int health);	
	bool SetmMod();	
	bool GetIshungry() const;	
	bool GetMood() const;	
	const char* const GetClassanimal() const;	
	const char* const GetCPoroda() const;	
	const char* const GetCFood() const;	
	int GetEnergy() const;
	int GetHealth() const;	
	void Walk();
	void Sleep();
	void Show() const;
	};
class Tickets
{
private:
	enum Price { Adult, Сhildren };
	Date timesofDay;
	Date dayofweek;
	bool adult; // льготный
	double skidki;
	int price;
public:
	Tickets();	
	void SetPrice(int price);	
	void SetSkidki(double skidki);
	void SetTimesofDay(int min, int hour, int day, int month);	
	void SetDayofweek(int dayofweek);
	bool SetAdult();	
	bool GetAdult() const;	
	Date GetTimesofDay() const;	
	Date GetDayofweek() const;		
	int GetPrice() const;
};
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
	bool SetCleanaviary();
	bool SetVaccination();	
	bool SetPartner();
	void SetParasites();		
	bool GetParasites() const;
	bool GetPartner() const;	
	bool GetVaccinations() const;
	bool GetcLeanaviary() const;
	const char* const GetTypefoodforanimals() const;
	

};
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
	void SetFoodforclients(const char* foodforclients);	
	void SetRegulations(int regulations);	
	void SetPrice(int prices);	
	bool SetParavozforkids();	
	bool SetCarousel();		
	double GetPrices() const;
	const char* const GetFoodforclients() const;
	int GetRegulations() const;	
	bool GetParavozforkids() const;
	bool GetCarousel() const;
	
};