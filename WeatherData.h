#pragma once
#include <iostream>
#include <vector>
#include "WeatherSubject.h"
#include "SMSNotification.h"
#include "EmailNotification.h"
#include "PhoneNotification.h"
using namespace std;
class WeatherData
{
private:
	float temperature = 24.3;
	int pressure = 770;
	float humidity = 40;
	SMSNotification sms;
	EmailNotification email;
	PhoneNotification phone;
public:
	vector<WeatherSubject*> numbers;
	vector<WeatherSubject*>::iterator it;
	

	void event()
	{
		if (temperature != 24.3 && pressure != 770 && humidity != 40)
		{
			sms.notification();
			email.notification();
			phone.notification();
		}

	}
};

