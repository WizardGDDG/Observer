#pragma once
#include <iostream>
#include "WeatherSubject.h"
#include "WeatherData.h"
using namespace std;
class EmailNotification:public WeatherSubject
{
private:
	WeatherData wd;
public:
	void add() override
	{
		wd.numbers.push_back(this);
	}
	void del() override
	{
		wd.it = find(wd.numbers.begin(), wd.numbers.end(), this);
		wd.numbers.erase(wd.it);
	}
	void notification() override
	{
		cout << "Email: Новая информация о погоде" << endl;
	}
};

