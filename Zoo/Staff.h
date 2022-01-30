#pragma once
#include "ALlstandartInclude.h"

class Staff
{
protected:
	enum Position { Manager, �leaner, Warehousemanager, Securityguard, �ashier };
	enum Gender { Male, Female };
	char* name;
	int position; //���������
	int gender;
	char* responsibilities; //����������
	double wage; //�������� 
	int fine; // ����� 
	Date cametowork;
public:
	Staff();
	~Staff();
	void SetName(const char* name);
	void Set�ametowork(int min, int hour, int day, int month);
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
